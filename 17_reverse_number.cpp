#include<iostream>
using namespace std;
int main () {
    int N;
    cin>>N;
    while(N>0){
        int lastdigit = N%10;
        cout<<lastdigit;
        N=N/10;
    }
    return 0;
}