#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "Diya";
    string s2;
    
    cout << "Enter a string with spaces: ";
    getline(cin, s2);

    cout << "String 1: " << s1 << ", Length: " << s1.length() << endl;
    cout << "String 2: " << s2 << endl;

    // Concatenation
    string combined = s1 + " " + s2;
    cout << "Combined: " << combined << endl;

    // Modifying strings
    combined.push_back('!');
    cout << "After push_back: " << combined << endl;
    
    combined.pop_back();
    cout << "After pop_back: " << combined << endl;

    // Substring
    cout << "Substring (from 0 to 3): " << combined.substr(0, 4) << endl;

    return 0;
}
