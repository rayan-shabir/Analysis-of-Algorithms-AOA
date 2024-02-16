#include "iostream"
using namespace std;

void coin_change(int s[], int n, int x) {
    for (int i = (n-1); i >= 0; i--) {
        int q = x / s[i];

        x = x % s[i];
        
        if (q > 0) {
            cout << q << " Notes of " << s[i] << endl;
            // x = x % s[i];
        }
        
        if (x == 0) return;
    }
    
}

int main() {
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000, 5000};

    int change = 987;

    coin_change(arr, 10, change);

    return 0;
}