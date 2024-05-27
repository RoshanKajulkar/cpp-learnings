#include<bits/stdc++.h>

using namespace std;

void printNNumbers(int i, int n) {

    if(i > n) {
        return;
    }

    cout << i << " ";

    printNNumbers(i+1, n);
}

int sumOfN(int n){
    if(n==0) {
        return 0;
    }

    return n + sumOfN(n-1);
}

int main() {

    cout << sumOfN(5);
    return 0;
}