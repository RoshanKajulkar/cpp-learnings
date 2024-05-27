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

// The Euclidean Algorithm is a method for finding the greatest common divisor of two numbers. It operates on the principle that the GCD of two numbers remains the same even if the smaller number is subtracted from the larger number.
int getGCD(int num1, int num2) {

    while(num1 >0 && num2 > 0) {

        if(num1 > num2) {
            num1 = num1 % num2;
        } else {
            num2 = num2 % num1;
        }
    }

    return num1 == 0 ? num2 : num1;
}

// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
bool isArmstrongNum(int num) {
    int originalNum = num;
    int digitCount = (int)log10(num) + 1;

    int sum = 0;

    while(num > 0) {
        int lastDigit = num % 10;
        num = num / 10;


        sum += pow(lastDigit, digitCount);
    }

    return sum == originalNum ? true : false;
}

void printDivisors(int num) {
    int sqrtN = sqrt(num);

    for(int i=1; i<=sqrtN; i++) {
        if(num % i == 0) {
            cout << i << " ";

            if(i != num / i) {
                cout << num / i << " "; 
            }
        } 
    }
}

bool isPrime(int num) {
    int sqrtN = sqrt(num);

    for(int i=2; i<=sqrtN; i++) {
        if(num%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    cout << "Math Problems";
    
    return 0;
}
