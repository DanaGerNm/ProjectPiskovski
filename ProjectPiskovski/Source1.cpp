#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "");
	for (int i = 35; i <= 87; i++) {
		if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5) 
		{
			cout << i << endl;
		}
	}
}