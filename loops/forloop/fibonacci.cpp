 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    int sum;

    for (int i = 1; i <= n - 2; i++) {
        sum = a + b;
        cout << sum << " ";
        a = b;  // order is important
        b = sum;
    }

    cout << endl;
    return 0;
}