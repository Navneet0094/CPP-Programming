#include<iostream>
using namespace std;
int main(){
    int rem,mul = 1,ans = 0;
    int num = 1101; //binary
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = rem*mul+ans;
        mul *= 2;
    }
    cout<<ans<<endl;
    
}