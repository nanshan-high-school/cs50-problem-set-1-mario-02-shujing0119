#include <iostream>
using namespace std;

int main() {
    int high;

    do {
        cout << "請輸入高度:";
        cin >> high;
    } while (high > 8 || high <= 0);

    int i,j,k;

    for (i = 0; i < high; i++) {
        for (k = high - 1; k > i; k--) {
            cout << " ";
        }
        for (j = 0; j <= i; j++) {
            cout << "*";           
        }

        cout << "  ";

        for (j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

// 650275 杜心妍
