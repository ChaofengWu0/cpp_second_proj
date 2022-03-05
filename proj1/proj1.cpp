#include "assign1_mat.h"
#include "assign1.h"
#include "iostream"

using namespace std;
const int MODULE = 1000000000 + 7;

int quick_power(int x, int n) {
    if (n == 0)return 1;
    int temp = quick_power(x, n / 2) % MODULE;
    if (n % 2)return ((temp * temp) % MODULE * x) % MODULE;
    else return (temp * temp) % MODULE;
}

int main() {
    cout << MODULE << endl;
    cout << quick_power(2, 3) << endl;
}