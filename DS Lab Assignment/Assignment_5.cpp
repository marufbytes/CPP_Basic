#include <bits/stdc++.h>
using namespace std;

class Country
{
public:
    string code;
    double latitude;
    double longitude;
    string name;

    Country(string c, double lat, double lon, string n)
        : code(c), latitude(lat), longitude(lon), name(n) {}
};

double radian(double degree)
{
    return degree * M_PI / 180.0;
}

// formula
double Distance(double lat1, double lon1, double lat2, double lon2)
{
    double R = 6400.00;
    double dLat = radian(lat2 - lat1);
    double dLon = radian(lon2 - lon1);
    lat1 = radian(lat1);
    lat2 = radian(lat2);

    double a = sin(dLat / 2) * sin(dLat / 2) +
               cos(lat1) * cos(lat2) * sin(dLon / 2) * sin(dLon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return R * c; // d=rxc;
}

// read file
vector<Country *> loadCountries(const string &filename)
{
    vector<Country *> countries;
    ifstream file(filename);

    if (!file.is_open())
    {
        cerr << "Error opening file: " << filename << endl;
        return countries;
    }

    string line;
    while (getline(file, line))
    {
        stringstream ss(line);
        string code, name;
        double latitude, longitude;

        ss >> code >> latitude >> longitude;
        getline(ss, name);
        name = name.substr(1);

        countries.push_back(new Country(code, latitude, longitude, name));
    }

    file.close();
    return countries;
}

int main()
{
    // file read
    vector<Country *> countries = loadCountries("country.txt");

    if (countries.empty())
    {
        cerr << "No countries " << endl;
        return 1;
    }

    int choice1, choice2;
    cout << "Enter the number of the first country: ";
    cin >> choice1;
    cout << "Enter the number of the second country: ";
    cin >> choice2;

    if (choice1 < 1 || choice1 > countries.size() ||
        choice2 < 1 || choice2 > countries.size())
    {
        cerr << "Invalid " << endl;
        return 1;
    }

    Country *country1 = countries[choice1 - 1];
    Country *country2 = countries[choice2 - 1];

    // distance
    double distance = Distance(country1->latitude, country1->longitude,
                               country2->latitude, country2->longitude);

    // Display
    cout << "The distance between " << country1->name << " and "
         << country2->name << " is " << distance << " km." << endl;

    return 0;
}
