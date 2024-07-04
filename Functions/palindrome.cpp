#include<iostream>
using namespace std;
int main(){
    int x,rem,ans =0;
    cin>>x;
    int n = x;
    while(n !=0){
        rem = n%10;
        n = n/10;
        ans = ans*10 + rem;
    }
    cout<<ans<<endl;
    if (ans==x){
        cout<<" number is palindrome ";
    }
    else{
        cout<<"not a palindrome";
    }
}