#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    cin >> n;
    int sum = 0;
    int arr[n][2];
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n;i++) {
        for(int j=n-1; j>i; j--) {
            if(arr[j][0] == arr[i][1] ) {
                sum++;
            }
            if(arr[j][1] == arr[i][0]) {
                sum++;
            }
        }
    }
    cout << sum;
}