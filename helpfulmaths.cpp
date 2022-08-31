#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b,c;
    cin >> a;
    int n = a.length()/2;
    for(int i=0;i<a.length();i++) {
        if(a[i] != '+') {
            b= b + (char)a[i];
        }
    }
    sort(b.begin(),b.end());
    for(int i=0; i<b.length(); i++) {
        c = c + (char)b[i];
        if(i!=b.length()-1) {
        c = c + '+';
        }
    }
    
    cout << c;
}