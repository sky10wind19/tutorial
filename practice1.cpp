#include <iostream>
using namespace std;

int main() {
	int luck_num;
	cout << "1~4,which is your lucky number?\n";
	cin >> luck_num;
	//switch ¼gªk
	switch (luck_num) {
		case 1:
			cout << "Hello cupcat.\n";
			break;
		case 2:
			cout << "Cupcat is lazy cat.\n";
			break;
		case 3:
			cout << "Cupcat is cute cat.\n";
			break;
		case 4:
			cout << "I love you.\n";
			break;
		default:
			cout << "error input.\n";
			break;
	}

	// if¼gªk
	/*
	if (luck_num == 1) {
		cout << "Hello cupcat.\n";
		}
	else if (luck_num == 2) {
		cout << "Cupcat is lazy cat.\n";
	}
	else if (luck_num == 3) {
		cout << "Cupcat is cute cat.\n";
	}
	else {
		cout << "I love you.\n";
	}
	*/
	system("pause");
	return 0;

}