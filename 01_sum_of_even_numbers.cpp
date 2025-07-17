#include<iostream>
using namespace std;
int main () {
  int N;
  cin>>N;
  int i=2;
  int sum=0;
  while(i<=N){
    sum=sum+i;
    i=i+2;
  }
  cout<<"Value of sum is "<<sum<<endl;

}