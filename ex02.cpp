#include <iostream>
using namespace std;

static void print_reverse_alphabet() {
	char X;
	 for (X = 'z'; X >= 'a'; X--) {
		cout << X << " ";
	};
}

int main() {

	print_reverse_alphabet();



	return 0;
}
