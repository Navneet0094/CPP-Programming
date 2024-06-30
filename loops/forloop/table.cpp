#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=10;i++){
//         cout<<n<<'*'<<i<<'='<<n*i<<endl;
//     }
// }

int main(){
    int n;
    cin>>n;
    for(int i = n ; i<=n*10 ; i = i+n){
        cout<<i<<endl;

    }
}