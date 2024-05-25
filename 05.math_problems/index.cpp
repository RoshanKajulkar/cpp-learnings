#include<bits/stdc++.h>

using namespace std;

// time complexity - O(1)
int countDigits(int num) {
    num = abs(num);

    if(num == 0) {
        return 1;
    }

    // logarithm is number of times base should be multiplied by itself to get the number
    // It is read as - log base 10 of 25

    return (int)log10(num) + 1;
}

int reverseNum(int x) {
    int reversedNum = 0;

        while (x != 0) {
            int lastDigit = x % 10;

            // Check if reversing would cause overflow
            if (reversedNum > INT_MAX / 10 || (reversedNum == INT_MAX / 10 && lastDigit > 7)) {
                return 0;
            }
            if (reversedNum < INT_MIN / 10 || (reversedNum == INT_MIN / 10 && lastDigit < -8)) {
                return 0;
            }

            reversedNum = reversedNum * 10 + lastDigit;
            x /= 10;
        }

        return reversedNum;
}

int main() {

    cout << INT_MAX;
    cout << INT_MIN;
    return 0;
}
