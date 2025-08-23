#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int arr[5];
    cout<<"Enter 5 elements: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"You entered: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    int sum=0;
    int i=0;
    while(i<5){
        sum=sum+arr[i];
        i++;

    }
    cout<<"Sum of all five elements in array =  "<<sum<<endl;
    return 0;

    


}
