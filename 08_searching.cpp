#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return true;
    }
    return false;
}

bool binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return true;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

int main() {
    int n, key;
    cout << "Enter size of sorted array: ";
    cin >> n;
    int arr[n];

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> key;

    // Uncomment any one to test
    // if(linearSearch(arr, n, key))
    if(binarySearch(arr, n, key))
        cout << "Found!";
    else
        cout << "Not Found!";

    return 0;
}
