#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main() {
    // STL array
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "STL Array elements: ";
    for(auto x : arr)
        cout << x << " ";
    cout << "\nFirst element: " << arr.front() << ", Last: " << arr.back() << endl;

    // Vector
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "\nVector elements: ";
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    v.pop_back(); // removes 30
    cout << "\nAfter pop_back: ";
    for(int i : v)
        cout << i << " ";

    cout << "\nVector size: " << v.size() << endl;

    return 0;
}
