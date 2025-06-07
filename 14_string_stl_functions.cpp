#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s = "diyaislearningcpp";

    // Length
    cout << "Length: " << s.length() << endl;

    // Substring
    cout << "Substring (0 to 3): " << s.substr(0, 4) << endl;

    // Find
    cout << "Find 'cpp': " << s.find("cpp") << endl;

    // Insert
    s.insert(4, "_");
    cout << "After insert: " << s << endl;

    // Erase
    s.erase(4, 1);
    cout << "After erase: " << s << endl;

    // Replace
    s.replace(0, 4, "Diya");
    cout << "After replace: " << s << endl;

    // Compare
    string a = "apple", b = "banana";
    cout << "Compare result (a vs b): " << a.compare(b) << endl;  // < 0 means a < b

    // Sorting characters in string
    sort(s.begin(), s.end());
    cout << "Sorted characters: " << s << endl;

    return 0;
}
