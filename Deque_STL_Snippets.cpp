#include<iostream>
#include<deque>
using namespace std;
int main (){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    //before pop
    cout<<"Element at second Index:  "<<d.at(1)<<endl;
    cout<<"Element at first Index:  "<<d.at(0)<<endl;
    d.pop_front();
    //after pop
    cout<<"Element at first Index:  "<<d.at(0)<<endl;
    cout<<endl;
    cout<<"Is d empty?  ans:"<<d.empty()<<endl;

}