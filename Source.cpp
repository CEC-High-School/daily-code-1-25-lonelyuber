#include <iostream>

using namespace std;
char firstletter;
char secondletter;
char thirdletter;

int main() {
	

	cout << "What is the 3 character password?" << endl;
	cin >> firstletter;
	cin >> secondletter;
	cin >> thirdletter;

	if (firstletter == 'N' && secondletter == 'E' && thirdletter == 'S')
		cout << "Welcome to the game" << endl;
	else
		cout << "next time buddy :)))" << endl;

}