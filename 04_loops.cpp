#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Counting from 1 to " << n << " using for loop:\n";
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
        sum += i;
    }

    cout << "\nSum of first " << n << " natural numbers: " << sum;

    return 0;
}
