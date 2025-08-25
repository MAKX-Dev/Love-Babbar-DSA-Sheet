#include<iostream>
using namespace std;
void printArray(int arr[],int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);

        }
    }
}
int main (){
    int even[8]={2,5,6,3,8,4,9,8};
    int odd[5]={3,5,7,9,3};
    swapAlternate(even,8);
    printArray(even,8);
    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);
    return 0;

}
