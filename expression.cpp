#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    int ans=0;
    cin >> a >> b >> c;
    int arr[6] = {(a+b)*c,a*(b+c),a+b+c,a*b*c,a*b+c,a+b*c};
    for(int i=0; i<6;i++) {
        if(arr[i] > ans) {
            ans = arr[i];
        }

    }
    cout << ans;
}