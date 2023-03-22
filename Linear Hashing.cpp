#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int x[10];

void insert(int data) {
    int val = data % 10;
    while (x[val] != 0) {
        val++;
    }
    x[val] = data;
}

void print() {
    for (int i = 0; i < 10; i++) {
        cout << i << " " << x[i] << endl;
    }
}

int main() {
    while (true) {
        int c;
        cin >> c;
        if (c == 1) {
            int data;
           
        }
    }
}
