// ek name k 2 function bana skte hai but unke parameter alag alag hone chaie => type
#include<iostream>
using namespace std;
// void Swap(int &m,int &n){  // pass by reference
//     int c = m;
//     m = n;
//     n = c;
// }
// void Swap(float &m,float &n){  // float parameter is different 
//     float c = m;
//     m = n;
//     n = c;
// }

int main(){
    int a, b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<"    "<<b<<endl;
    float f1  =3.6,f2 = 4.6;
    swap(f1,f2); //  ye run ho jayega bcoz inbuilt funiction hai
    cout<<f1<<"  "<<f2; 
}

// function k same name ho or arguments different ho => function overloading 