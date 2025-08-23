#include <iostream>
#include <algorithm> 
#include <climits>   

using namespace std;

int getMax(const int num[], int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; ++i) {
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int getMin(const int num[], int n) {
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i) {
        mini = min(mini, num[i]);
    }
    return mini;
}

int main() {
    int size;
    cin >> size;

    if (size < 1 || size > 100) {
        cout << "Invalid size\n";
        return 0;
    }

    int num[100];
    for (int i = 0; i < size; ++i) {
        cin >> num[i];
    }

    cout << "Max value is " << getMax(num, size) << endl;
    cout << "Min value is " << getMin(num, size) << endl;
    return 0;
}
