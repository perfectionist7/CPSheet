#include <bits/stdc++.h>
using namespace std;
int main() {
    int total,nm;
    double price,pricem;
    cin >> total >> nm >> price >> pricem;

    double x = (float)pricem/nm;
    double y = min(price*(total%nm)+x*(total - total%nm),x*total);
    cout <<  int(ceil(min(y,price*total)));
}