#include<iostream>
using namespace std;
void swap(int &m,int &n){  // pass by reference
    int c = m;
    m = n;
    n = c;
}
int main(){
    int a, b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<"   "<<b;
}