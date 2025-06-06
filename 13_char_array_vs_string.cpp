#include<iostream>
#include<cstring> // for char array functions
using namespace std;

int main() {
    // Char Array
    char name1[20];
    cout << "Enter your name (char array): ";
    cin >> name1;
    cout << "Hello, " << name1 << "!" << endl;

    // String
    string name2;
    cout << "Enter your full name (string): ";
    cin.ignore(); // clear buffer before getline
    getline(cin, name2);
    cout << "Welcome, " << name2 << "!" << endl;

    // String functions
    cout << "Length using char array: " << strlen(name1) << endl;
    cout << "Length using string: " << name2.length() << endl;

    // Comparing
    if(strcmp(name1, "Diya") == 0)
        cout << "Char array matches 'Diya'" << endl;
    if(name2 == "Diya Jain")
        cout << "String matches 'Diya Jain'" << endl;

    return 0;
}
