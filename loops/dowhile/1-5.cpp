#include<iostream>
using namespace std;
int main(){
    int i = 1;//initialisation
    do {//updation
        cout<<i<<"  ";
        i++;  //agar i++ upar likhdu cout se to 2 3 4 5 6 hoga bcoz phle hi increment ho jayega
    }
    while(i<=5);
}