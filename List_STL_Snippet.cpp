#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(7);
    l.push_front(6);
    for(int i:l){
        cout<<i<<endl;
        list<int>l(5,100);

    }
}