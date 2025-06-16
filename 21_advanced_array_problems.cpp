//1. Move Zeroes to End
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int count = 0; // count of non-zero elements

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }

    cout << "Array after moving zeroes to end: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
*/

//2. Rotate Array by K Positions (Right Rotation)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<int>& v, int k) {
    int n = v.size();
    k = k % n;

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
}

int main() {
    int n, k;
    cout << "Enter number of elements and k: ";
    cin >> n >> k;

    vector<int> v(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> v[i];

    rotateArray(v, k);

    cout << "Rotated Array: ";
    for(int x : v) cout << x << " ";
}
*/

//3. Find Second Largest Element
#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int largest = INT_MIN, secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest Element: " << secondLargest << endl;
}
