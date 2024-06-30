#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    if (n<2){
        cout<<"not prime";
        return 0;
    }
    else{
        for(int i = 2; i<n;i++){
            if(n%i == 0){
                cout<<"NOt prime";
                return 0;
            }
        }
        cout<< "Prime";
        return 0;

    }
}