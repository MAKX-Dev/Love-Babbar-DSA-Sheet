#include<iostream>
using namespace std;
bool uniqueOcurrence(int arr[],int n){
    int freq[2001]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]+1000]++;

    }
    bool seen[2001]={false};
    for(int i=0;i<2001;i++){
        if(freq[i]>0){

        
        if (seen[freq[i]]){
            return false;
        }
        }
{
   seen[freq[i]]=true; 

} 
   }
return true;
}
int main (){
    int arr[]={-3,0,1,-3,1,1,1,-3,10,0};
    int n=sizeof(arr) / sizeof(arr[0]);
    if(uniqueOcurrence(arr,n)){
        cout<<"True";
    }
      else{
        cout<<"False";

      }
            
        
        return 0;
    


}



   
