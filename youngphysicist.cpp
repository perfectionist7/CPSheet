#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x,y,z;
    int sum1,sum2,sum3=0;
    cin  >> n;
    int arr[n][3];
    for(int i=0; i<n;i++) {
        for(int j=0; j<3;j++) {
            cin >> arr[i][j];
            if(j==0) {
                sum1 = sum1 + arr[i][j];
            }
            if(j==1){
                sum2 = sum2 + arr[i][j];
            }
            if(j==2){
                sum3 = sum3 + arr[i][j];
            }
        }
    }
    if(sum1==0 && sum2==0 && sum3==0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

}