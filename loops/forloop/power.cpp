#include<iostream>
using namespace std;
int main(){
    int n ,e;
    cout<<"enter number: ";
    cin>>n;
    cout<<"Enter exponent";
    cin>>e;
    int num = n;
    for(int i =1;i<e;i++){
        num = num*n;
    }
    cout<< num;
}