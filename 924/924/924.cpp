#include <iostream>
#include <string>

using namespace std;

int main() {
	string s[4];
	for (int i = 0; i < 4; i++) 
	{
		cin >> s[i];
	}
	// dividing array into four lines that we will check
	string firstLine = s[0];
	string secondLine = s[1];
	string thirdLine = s[2];
	string fourthLine = s[3];
	// comparing every line starting from first to second, second to third and third to fourth
	for (int i = 0; i < 4; i++) {
		if (firstLine[i] == firstLine[i + 1] && secondLine[i] == secondLine[i + 1] && firstLine[i] == secondLine[i]) {
			cout << "No";
			exit(0);
		}
	}
	for (int i = 0; i < 4; i++) {
		if (secondLine[i] == secondLine[i + 1] && thirdLine[i] == thirdLine[i + 1] && secondLine[i] == thirdLine[i]) {
			cout << "No";
			exit(0);
		}
	}
	for (int i = 0; i < 4; i++) {
		if (thirdLine[i] == thirdLine[i + 1] && fourthLine[i] == fourthLine[i + 1] && thirdLine[i] == fourthLine[i]) {
			cout << "No";
			exit(0);
		}
	}
	cout << "Yes";
}