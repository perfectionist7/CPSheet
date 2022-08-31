#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        int result = 0;
        if(b>=a){
           for(int i=0; i<=6;i++) {
            if(a*pow(2,i) == b) {
                cout << "YES";
                result = 1;
                break;
            }
           }
           if(result==0) {
            cout << "NO";
           }
        }
        if(a>b) {
            for(int i=0; i<=6;i++) {
            if(b*pow(2,i) == a) {
                cout << "YES";
                result = 1;
                break;
            }
           }
           if(result==0) {
            cout << "NO";
           }
        }
        cout << endl;

    }
}