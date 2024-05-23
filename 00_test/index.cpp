#include<bits/stdc++.h>

using namespace std;

void println(int n, int repeatingNum) {
    int col = (n + max(0, n - 1)) - (n - repeatingNum)*2;

    for(int i=n; i>repeatingNum; i--) {
        cout << i;
    }

    while(col > 0) {
        cout << repeatingNum;
        col--;
    }

    for(int i=repeatingNum+1; i<=n; i++) {
        cout << i;
    }

    cout << "\n";
}

int main() {
    int n = 2;

    for(int i=n; i>0; i--) {
        println(n, i);
    }   

    for(int i=2; i<=n; i++) {
        println(n, i);
    }
    return 0;
}
