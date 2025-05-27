#include<iostream>
using namespace std;

// Function with return type
int add(int a, int b) {
    return a + b;
}

// Function without return type
void greet() {
    cout << "Hello, Diya! Keep rocking! 💥" << endl;
}

int main() {
    greet(); // calling function without return

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int sum = add(x, y); // calling function with return
    cout << "Sum = " << sum << endl;

    return 0;
}
