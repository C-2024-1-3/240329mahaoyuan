#include<iostream>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t = 0;
    for (int i = 1;i <= 200;i++) {
        if (is_prime(i) == 1) {
            cout << i << " ";
            t++;
        }
        if (t == 10) {
            cout << endl;
            t = 0;
        }
    }
	return 0;
}