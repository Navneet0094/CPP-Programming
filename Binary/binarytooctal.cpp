#include<iostream>
using namespace std;
int main(){
    int rem,mul=1,ans =0 ;//for binary to octal
    int num = 1101;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = rem*mul+ans;
        mul = mul*2;
    }
    cout<<ans<<endl;
    int quo,mult=1,sum = 0;// for decimal to octal
    while(ans>0){
        quo = ans%8;
        ans = ans/8;
        sum = quo*mult+sum;
        mult *= 10;// 10 bcoz we want to convert ittot base 10 format
        
    }
    cout<<sum<<endl;
}