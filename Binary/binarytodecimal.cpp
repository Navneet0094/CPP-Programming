#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    int rem,ans=0,mul= 1;
    while(num>0){
            rem = num&1;//num%2
            num = num>>1;//num/2;
            ans = rem*mul+ans;
            mul = mul*10;
    }
    cout<<ans;
}