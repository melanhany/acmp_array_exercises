#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");
	int n;
	fin >> n;

	int counter = 0;
	for (int i = 0; i < n*n; ++i)
	{
		int t;
		fin >> t;

		if (t)
			++counter;
	}

	fout << counter / 2;

	return 0;
}