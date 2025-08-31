#include<iostream>
#include<deque>
using namespace std;
int main (){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.at(1);
    d.pop_back();
    cout<<endl;

}