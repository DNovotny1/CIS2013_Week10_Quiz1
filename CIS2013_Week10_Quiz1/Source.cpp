#include <iostream>
#include <string>
using namespace std;


int main() {
	char cont = 'y';
	string input;

	while (cont = 'y') {
		int bCount = 1;
		cout << "\nEnter your string.\n";
		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == 'b') {
				if (bCount % 2 == 0) {
					cout << "STAND";
					bCount++;
				}
				else {
					cout << "SIT";
					bCount++;
				}


			}

			else {
				cout << input[i];
			}
		}

	}
	return 0;
}
