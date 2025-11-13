#include <iostream>
#include <string>
using namespace std;

int main() {
    string var;
    cout << "Enter a variable name: ";
    cin >> var;

    if (var[0] >= '0' && var[0] <= '9') {
        cout << "Invalid: Variable name cannot start with a number.\n";
        return 0;
    }

    for (int i = 0; i < var.length(); i++) {
        char c = var[i];

        if (!((c >= 'a' && c <= 'z') ||
              (c >= 'A' && c <= 'Z') ||
              (c >= '0' && c <= '9') ||
              c == '_')) 
        {
            cout << "Invalid: Variable name contains invalid character '" << c << "'.\n";
            return 0;
        }
    }

    cout << "Valid variable name.\n";
    return 0;
}
