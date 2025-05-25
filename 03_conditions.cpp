#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 13) {
        cout << "You are a child.";
    }
    else if(age >= 13 && age < 20) {
        cout << "You are a teenager.";
    }
    else if(age >= 20 && age < 60) {
        cout << "You are an adult.";
    }
    else {
        cout << "You are a senior citizen.";
    }

    return 0;
}
