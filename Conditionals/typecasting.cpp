
//typecasting
//bool(1)-> char(1)-> int(4)-> double(8)
//double -> int it will fail
#include<iostream>
using namespace std;  // ascii value 0 255 k bich hoti hai
int main(){
    int a = 10;
    char  c = 'b';
    a = c;
    cout<<a<<endl;// will print ascii value as a is of type int
    // int n = 66;
    int g =1234; // > 255 so data losss will happpen
    char p = 'm';
    // p = n;
    p = g;
    cout<<p<<endl;


}