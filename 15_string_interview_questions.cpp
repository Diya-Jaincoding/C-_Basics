//1. Check if String is Palindrome

/*#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length()-1;
    while(i < j) {
        if(s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << (isPalindrome(str) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}

//2. Reverse Words in a Sentence

#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main() {
    string s;
    cout << "Enter sentence: ";
    cin.ignore();
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> words;

    while(ss >> word) words.push_back(word);

    cout << "Reversed: ";
    for(int i = words.size()-1; i >= 0; i--) cout << words[i] << " ";
}*/


//Check if Two Strings Are Anagrams
#include<iostream>
#include<algorithm>
using namespace std;

bool areAnagrams(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;

    cout << (areAnagrams(a, b) ? "Anagrams" : "Not Anagrams") << endl;
}
