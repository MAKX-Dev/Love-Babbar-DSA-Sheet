#include<iostream>
using namespace std;
int main () {
    int a;
    int b;
    cin>>a;
    cin>>b;
    if(a>b){
        cout<<"Answer is a"<<endl;
    }
    if(b>a){
        cout<<"Answer is b"<<endl;
    }
    if(a=b){
        cout<<"Answer is equal"<<endl;
    }
}