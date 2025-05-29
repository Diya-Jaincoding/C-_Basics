#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // declare array

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0, maxVal = arr[0];

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "\nSum = " << sum << endl;
    cout << "Max Value = " << maxVal << endl;

    return 0;
}
