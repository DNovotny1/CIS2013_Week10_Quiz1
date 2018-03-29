#include <iostream>
#include <string>
using namespace std;


int main() {
	char cont = 'y';
	string input;

	while (cont = 'y') {
		int bCount = 1;
		
		cout << "\nEnter your string.\n";
		//cin >> input;
		getline(cin, input);




		//int size = input.size;
		/*char arr[10];
		for (int i = 0; i < input.size(); i++) {
			arr[i] = input[i];
		}

*/


		for (int i = 0; i < input.size(); i++) {
			if (input[i] == 'b' || input[i] == 'B') {
				if (bCount % 2 == 0) {
					cout << "STAND";
					bCount++;
				}
				else {
					cout << "SIT";
					bCount++;
				}
			}
			else if (input[i] == char(32)) {
				cout << ' ';
			}

			else {
				cout << input[i];
			}
		}
	}
	return 0;
}
