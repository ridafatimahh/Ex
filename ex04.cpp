#include <iostream>
using namespace std;

static void ft_is_negative(int i){
	if (i < 0) {
		cout << "N" << endl;
	}
	else {
		cout << "P" << endl;
	}
} 
int main() {

	ft_is_negative(0);
	ft_is_negative(32);
	ft_is_negative(-55);
	
  return 0;
}
