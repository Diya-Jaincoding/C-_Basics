//1. Static Arrays - Basics
/*#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/

//2. Dynamic Vectors - Basics
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}


