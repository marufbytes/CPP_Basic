#include <iostream>
#include <string>
using namespace std;

bool isKeyword(string s) {
    string keywords[] = {
        "auto","break","case","char","const","continue","default","do","double",
        "else","enum","extern","float","for","goto","if","int","long","register",
        "return","short","signed","sizeof","static","struct","switch","typedef",
        "union","unsigned","void","volatile","while","class","public","private",
        "protected","template","typename","using","namespace","new","delete",
        "this","throw","try","catch","bool","true","false","inline","string"
    };

    int size = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < size; i++)
    {
         if (s == keywords[i])
          {
             return true;
          }
    }

    return false;
}

int main() {

    string var;
    cout << "Enter a variable: ";
    cin >> var;


    if (isKeyword (var)) {
        cout << "Invalid!" << endl;
        return 0;
    }

    if (var.at(0) >= '0' && var.at(0) <= '9') {
        cout << "Invalid! " << endl;
        return 0;
    }

    for (int i = 0; i < var.length(); i++) {
        char c = var.at(i);

        if (!((c >= 'a' && c <= 'z') ||
              (c >= 'A' && c <= 'Z') ||
              (c >= '0' && c <= '9') ||
              c == '_')) {

            cout << "Invalid!" << endl;
            return 0;
        }
    }

    cout << "Valid variable!" << endl;

    return 0;
}
