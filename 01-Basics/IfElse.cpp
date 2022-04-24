#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age < 18) {
        cout << "You are not eligible...";
    }
    else if (age >= 18 && age < 30)
    {
        cout << "You are eligible for loan upto 5 lacs";
    }
    else {
        cout << "You are eligible for loan upto 10 lacs";
    }
    

}