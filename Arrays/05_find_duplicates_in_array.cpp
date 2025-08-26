#include<iostream>
using namespace std;
int getDuplicates(int nums[],int n,int result[]){
    int freq[1001]={0};
    int size=0;
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }
        for(int i=1;i<=n;i++){
            if(freq[i]==2){
                result[size]=i;
                size++;
            }
        }
        return size;
        

    }
    
    

int main (){
    int nums[]={4,3,2,7,8,2,3,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    int result[100];
    int size=getDuplicates(nums,n,result);
    cout<<"Numbers appearing twice: ";
    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";

    }
    cout<<endl;
    return 0;
}