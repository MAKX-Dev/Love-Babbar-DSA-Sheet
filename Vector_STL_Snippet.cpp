#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>V;
    vector<int> a(4,5);
    cout<<"Capacity:  "<<a.capacity()<<endl;
    cout<<"Size of Vector:  "<<a.size()<<endl;
    cout<<"Element 1st Index:  "<<a.at(1)<<endl;
    cout<<"First Element:  "<<a.front()<<endl;
    cout<<"Last Element:  "<<a.back()<<endl;
    a.pop_back();
    


}