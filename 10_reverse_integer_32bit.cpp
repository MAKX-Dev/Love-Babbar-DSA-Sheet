#include<iostream>
#include<climits>
using namespace std;
int main () {
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
            return 0;
        }
    
    }
    cout<<"reverse of the given number is "<<ans;
    return 0;
}