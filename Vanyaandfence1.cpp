#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a,b,c;
    int sum = 0;
    cin >> a >> b;
    while(a--) {
        cin >> c;
        if(c>b) {
            sum = sum + 2;
        }
        else {
            sum = sum + 1;
        }
    }
    cout << sum;
}