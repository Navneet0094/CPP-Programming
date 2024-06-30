#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = n;
    while(i<=n*10){
        cout<<i<<endl;
        i = i+n;
    }
}