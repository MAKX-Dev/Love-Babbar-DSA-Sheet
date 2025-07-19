#include<iostream>
#include<math.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int answer=0;
    int base=1;
    while(n!=0){
        int bit=n & 1;
        answer=(bit*base)+answer;
        base *=10;
        n>>=1;
    }
    cout<<"in binary it is "<<answer<<endl;
    return 0;
}