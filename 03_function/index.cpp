#include<bits/stdc++.h>

using namespace std;

// pass by reference
void doSomething(string &name) {
    cout<< name << "\n";
    name[0] = 't';
}

// array are by default pass by reference hence no & required
void processArray(int arr[]){
    // logic
}

int main() {
    string name = "raj";
    doSomething(name);
    cout << name;
    return 0;
}

