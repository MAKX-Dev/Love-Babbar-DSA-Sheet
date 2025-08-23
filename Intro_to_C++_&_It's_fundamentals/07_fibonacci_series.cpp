#include<iostream>
using namespace std;
int main () {
    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<"First n numbers of Fibonacci Series are: "<<endl;
    for(int i=1;i<=n;i++) {
        int j=a+b;
        cout<<j<<" "<<endl;
        a=b;
        b=j;
        
    }

}