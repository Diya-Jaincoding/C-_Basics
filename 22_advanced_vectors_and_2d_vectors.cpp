//1. Important Vector Functions
/*#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {5, 1, 2, 4, 3};

    cout << "Size: " << v.size() << endl;
    cout << "First Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;

    v.pop_back(); // removes last element

    cout << "After pop_back(): ";
    for(int x : v) cout << x << " ";
    cout << endl;

    v.clear(); // removes all elements

    cout << "Size after clear(): " << v.size() << endl;

    return 0;
}
*/

//2. 2D Vectors (Matrix Style)
/*#include<iostream>
#include<vector>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    cout << "2D Vector (Matrix):" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}*/

//3. Vector of Pairs + Sorting by Second Element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // sort by second value
}

int main() {
    vector<pair<int, int>> v = {{1, 3}, {2, 1}, {5, 2}};

    sort(v.begin(), v.end(), compare);

    cout << "Sorted Vector of Pairs (by second): ";
    for(auto p : v) cout << "(" << p.first << "," << p.second << ") ";
}
