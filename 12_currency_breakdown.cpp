#include<iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the total amount: ";
    cin >> amount;
    int x = 0, y = 0, z = 0, a = 0; 
    switch(1) {
        case 1:
            x = amount / 100;
            amount = amount % 100;
        case 2:
            y = amount / 50;
            amount = amount % 50;
        case 3:
            z = amount / 20;
            amount = amount % 20;
        case 4:
            a = amount / 1;
            amount = amount % 1;
            break;
        default:
            cout << "Invalid input";
    }
    cout << "Number of 100 Rs notes: " <<x<< endl;
    cout << "Number of 50 Rs notes: " <<y<< endl;
    cout << "Number of 20 Rs notes: " <<z<< endl;
    cout << "Number of 1 Rs notes: " <<a<< endl;
    return 0;
}
