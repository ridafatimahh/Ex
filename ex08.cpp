#include <iostream>
using namespace std;
static void print_comb(int n, int start, int combination[], int ind) {
    
    if (ind == n) {
        for (int i = 0; i < n; ++i) {
           
            if (combination[i] < 10) {
                cout << "0"; 
            }
            cout << combination[i]; 

            if (i != n - 1) {
                cout << " "; 
            }
        }
        return;
    }

    for (int i = start; i <= 9; ++i) {
        combination[ind] = i;
        print_comb(n, i + 1, combination, ind + 1);
    }
}

int main() {
    int n;
    \
    cout << "Enter a value for n (0 < n < 10): ";
    cin >> n;

    
    if (n <= 0 || n >= 10) {
        cerr << " n must be in the range 0 < n < 10." << endl;
        return 1;
    }

    int combination[10]; 
    print_comb(n, 0, combination, 0); 
    cout << endl;

    return 0;
}

