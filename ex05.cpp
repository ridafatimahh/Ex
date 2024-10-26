#include <iostream>
using namespace std;

static void print_comb() {
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                cout << i << j << k;
                
                    cout << ", " ;
                }
            }
        }
    }




int main() {
	
    print_comb();

return 0;
}
