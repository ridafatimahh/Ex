#include <iostream>
using namespace std;

static void print_comb2() {
    for (int i = 0; i <= 98; i++) {
        for (int j = i + 1; j <= 99; j++) {
          if (i < 10) cout << "0";
            cout << i << " ";

          if (j < 10) cout << "0";
            cout << j;

         
            if (!(i == 98 && j == 99)) {
                cout << ", " ;
            }
        }
    }
   
}

int main() {

    print_comb2();

    return 0;
}
