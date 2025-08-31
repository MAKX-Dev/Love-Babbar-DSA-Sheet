#include<iostream>
#include<array>
using namespace std;
int main (){
array<int,4>a={2,5,6,8};
int size=a.size();
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}

    cout<<"Element at 2nd Index:  "<<a.at(2)<<endl;
    cout<<"Check for emptiness:  "<<a.empty()<<endl;
    cout<<"First Element:  "<<a.front()<<endl;
    cout<<"Last Element:  "<<a.back()<<endl;

}
