//1. Find Maximum & Minimum in Array
/*#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int maxi = INT_MIN, mini = INT_MAX;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    cout << "Max: " << maxi << ", Min: " << mini << endl;
}
*/

//2. Reverse an Array
/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Reversed Array: ";
    for(int i = n-1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;
}
*/
//3. Two Sum Problem (Famous LeetCode Q)
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(m.find(complement) != m.end()) {
            return {m[complement], i};
        }
        m[nums[i]] = i;
    }
    return {-1, -1}; // If no answer
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
}
