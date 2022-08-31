#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    int sum=0;
    cin >> n;
    cin >> a;
    int arr[a];
    for(int i=0; i<a;i++) {
        cin >> arr[i];
    }
    cin >> b;
    int arr2[b];
    for(int i=0; i<b;i++) {
        cin >> arr2[i];
    }
    int arr3[a+b];                                                              
    for(int i=0;i<a+b;i++) {
        arr3[i] = arr[i];
        if(i>a-1) {
            arr3[i] = arr2[i-a];
        }
    }
    for(int j=1;j<=n;j++) {
        for(int i=0; i<=a+b;i++) {
            if(arr3[i] == j) {
                sum++;
                break;
            }
        }
    }

    if(sum==n) {
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }
    
}
