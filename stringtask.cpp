#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin >> a;
    for(int i=0;i<a.length();i++) {
        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'A' && a[i] != 'E' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U' && a[i] != 'Y' && a[i] != 'y' ) {
           b = b + '.';
           b = b + (char)tolower(a[i]);
        }
        

    }
    cout << b;
}