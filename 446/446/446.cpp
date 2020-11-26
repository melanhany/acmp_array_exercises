#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool comp(char **colourarr, int **numarr, int n, int m) {
	int i, j;
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
		{
			if (colourarr[i][j] == 'R') {
				if (numarr[i][j] != 4 && numarr[i][j] != 5 && numarr[i][j] != 6 && numarr[i][j] != 7) {
					return false;
				}
			}
			if (colourarr[i][j] == 'G') {
				if (numarr[i][j] != 2 && numarr[i][j] != 3 && numarr[i][j] != 6 && numarr[i][j] != 7) {
					return false;
				}
			}
			if (colourarr[i][j] == 'B') {
				if (numarr[i][j] != 1 && numarr[i][j] != 3 && numarr[i][j] != 5 && numarr[i][j] != 7) {
					return false;
				}
			}
		}
	return true;
}

int main()
{
	//ifstream fin("input.txt");
	//ofstream fout("output.txt");
	int n, m, i, j;
	cin >> n >> m;
	string *s;
	s = new string[n];

	for (i = 0; i < n; i++) {
		cin >> s[i];
	}

	// creating character array with n x m size
	char **RGB;
	RGB = new char*[n];

	for (i = 0; i < n; i++) {
		RGB[i] = new char[n];
	}

	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j)
		{
			//cout << "Enter element a" << i + 1 << j + 1 << " : ";
			RGB[i][j] = s[i][j];
		}

	/*for (i = 0; i < n; ++i, cout << endl)
		for (j = 0; j < m; ++j)
		{
			cout << RGB[i][j] << " ";
		}
		*/
	// creating number array with n x m size
	int **numberarray;
	numberarray = new int*[n];

	for (i = 0; i < n; i++) {
		numberarray[i] = new int[n];
	}

	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j)
		{
			//cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> numberarray[i][j];
		}
	}
	/*for (i = 0; i < n; ++i, cout << endl)
		for (j = 0; j < m; ++j)
		{
			cout << numberarray[i][j] << " ";
		}*/

	// using comparison function 
	if (comp(RGB, numberarray, n, m))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}