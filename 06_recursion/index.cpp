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

int factorial(int n) {
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

void printArray(int arr[], int n) {
   cout << "\nThe array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

void reverseArray(int arr[], int n) {
    int p1=0;
    int p2=n-1;

    while(p1 < p2) {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

bool isPalindrome(string s1) {
    int p1 = 0;
    int p2 = s1.length() - 1;

    while(p1 < p2) {

        if(!isalnum(s1[p1])) {
            p1++;
        } else if(!isalnum(s1[p2])){
            p2--;
        } else if(tolower(s1[p1]) != tolower(s1[p2])) {
            return false;
        } else {
            p1++;
            p2--;
        }
    }

    return true;
}

void printFib(int num1, int num2, int n, int currIndex) {

    if(currIndex > n) {
        return;
    }

    cout << num1 << " ";

    return printFib(num2, num1 + num2, n, ++currIndex);

}

int main() {

    printFib(0, 1, 6, 0);
    return 0;
}