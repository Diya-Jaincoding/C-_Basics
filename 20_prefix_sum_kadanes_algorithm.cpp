/*1. Prefix Sum of Array
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], prefix[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    prefix[0] = arr[0];
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] + arr[i];

    cout << "Prefix Sum Array: ";
    for(int i = 0; i < n; i++) cout << prefix[i] << " ";
    cout << endl;

    return 0;
}*/

//2. Kadane’s Algorithm (Maximum Subarray Sum)

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int currentSum = 0, maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {
        currentSum += arr[i];
        if(currentSum > maxSum) maxSum = currentSum;
        if(currentSum < 0) currentSum = 0;
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;
}
