//1. Remove All Adjacent Duplicates
/*#include<iostream>
#include<stack>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;
    for(char c : s) {
        if(!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }
    string result = "";
    while(!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    return result;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "After removing duplicates: " << removeDuplicates(s) << endl;
}
*/

//2. Longest Common Prefix (LeetCode Famous)

/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";

    sort(strs.begin(), strs.end());
    string first = strs[0], last = strs.back();
    int i = 0;
    while(i < first.size() && first[i] == last[i]) i++;

    return first.substr(0, i);
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
}
*/

//3. Remove All Spaces from String

#include<iostream>
using namespace std;

string removeSpaces(string s) {
    string result = "";
    for(char c : s)
        if(c != ' ') result += c;
    return result;
}

int main() {
    string s;
    cout << "Enter string with spaces: ";
    cin.ignore();
    getline(cin, s);

    cout << "Without spaces: " << removeSpaces(s) << endl;
}

