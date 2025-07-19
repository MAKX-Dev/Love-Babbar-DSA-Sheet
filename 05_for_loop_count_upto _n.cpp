#include<iostream>
using namespace std;
main () {
    int n;
    cin>>n;
    cout<<"value of n is "<<n<<endl;
    int i=1;
    for(;;){
        if(i<=n){
            cout<<i<<endl;

        }
        else{
            break;
        }
        i++;
    }
}