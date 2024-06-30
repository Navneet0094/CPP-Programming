#include<iostream>
using namespace std;
int main(){
    int rem,ans =0,mul = 1;
    int num = 13;
    while(num>0){
        rem = num%8;
        num = num/8;
        ans = rem * mul+ans;
        mul *= 10;

    }
    cout<<ans<<endl;
}