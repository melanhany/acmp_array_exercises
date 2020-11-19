#include <iostream>
#include <string>
#include <vector>
using namespace std;
int test(string a1, string a2);

int main()
{	
	int count = 0;
	int massiv;
	int j;
	string space;
	cin >> massiv >> j;
	//creating arrays
	string *stringarray = new string[massiv];
	string *stringarray2 = new string[massiv];
	for (int i = 0; i < massiv; i++) {
		cin >> stringarray[i];
	}
	for (int i = 0; i < massiv; i++) {
		cin >> stringarray2[i];
	}
	for (int i = 0; i < massiv; i++) {

		count += test(stringarray[i], stringarray2[i]);
		
	}
	cout << count;
}

int test(string a1, string a2)
{
	int count = 0;
	for (int i = 0; i < a1.length(); i++) {
		if (a1[i] == a2[i]) {
			count++;
		}
	}
	return count;
}