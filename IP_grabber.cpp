#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int ip[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void grab() {
	srand(time(0));
	cout << "Your IP was: ";
	for(int i = 0; i < 12; i++) {
		int rand_num = rand() % 10;
		ip[i] = rand_num;
		cout << ip[i];
		switch(i) {
			case 2:
				cout << '.';
				break;
			case 5:
				cout << '.';
				break;
			case 8:
				cout << '.';
				break;
		}
		
	}
}	

int main() {
	grab();
	MessageBox(NULL, "      IP grabbed and sent to anonymous user", "IP update", MB_OK);
	return 0;
}
