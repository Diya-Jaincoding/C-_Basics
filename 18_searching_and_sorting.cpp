//1. Linear Search
/*#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    
    cout << "Enter key to search: ";
    cin >> key;
    
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            cout << "Found at index " << i << endl;
            break;
        }
    }
    
    if(!found) cout << "Element not found" << endl;
    
    return 0;
}*/


//2. Binary Search (Only for Sorted Arrays)
/*#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    
    cout << "Enter key to search (binary search): ";
    cin >> key;
    
    int start = 0, end = n-1;
    bool found = false;

    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            found = true;
            cout << "Found at index " << mid << endl;
            break;
        }
        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    }
    
    if(!found) cout << "Element not found" << endl;
    
    return 0;
}*/

//3. Sorting Array or Vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v = {30, 10, 50, 20, 40};

    sort(v.begin(), v.end());

    cout << "Sorted Vector: ";
    for(int num : v) cout << num << " ";
    cout << endl;

    return 0;
}
