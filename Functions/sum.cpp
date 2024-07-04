#include<iostream>
using namespace std;
int Sum(int m, int n){
    int sum = m+n;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Sum(a,b);
}