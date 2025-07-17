#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 2;
    bool isPrime = true;

    while(i < N) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
        i = i + 1;
    }

    if (isPrime && N > 1) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }

}
