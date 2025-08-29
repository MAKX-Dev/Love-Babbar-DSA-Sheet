#include<iostream>
using namespace std;
int findPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s-e)/2;
        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }

    }
    return s;
}
int main (){
    int arr[]={7,9,1,2,3};
    int n=5;
    int pivotIndex=findPivot(arr,n);
    cout<<"Pivot Index:  "<<pivotIndex<<endl;
    cout<<"Pivot Element:  "<<arr[pivotIndex]<<endl;
    return 0;
}