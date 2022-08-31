#include <bits/stdc++.h>
using namespace std;
int main () {
int n,a;
int max_value = 0;
int maxi;
int mini;
int min_value = 110;
cin >> n;
for(int i=1;i<=n;i++) {
    cin >> a;
    if(a>max_value) {
        maxi = i;
        max_value = a;
    }
    if(a<=min_value) {
        min_value = a;
        mini = i;
    }
}
if(maxi > mini) {
    cout << (maxi-1) + (n-mini) - 1;
}
else {
    cout << (maxi-1) + (n-mini);
}
}