#include <iostream>
#include <string>
using namespace std;

void indicator(char **ships, int n, int m) 
{
	int i, j, counter = 0;

	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++) 
		{
			if (i == 0)
			{
				if (j == 0 && ships[i][j] > '*')
				{
					if (ships[i][j + 1] > '*' && ships[i + 1][j] > '*')
					{
						counter++;
					}
				}
				else if (j == m - 1 && ships[i][j] > '*')
				{
					if (ships[i][j - 1] > '*' && ships[i + 1][j] > '*')
					{
						counter++;
					}
				}
				else if (ships[i][j] > '*')
				{
					if (ships[i][j - 1] > '*' && ships[i + 1][j] > '*' && ships[i][j + 1] > '*')
					{
						counter++;
					}
						
				}
			}

			else if (i == n - 1)
			{
				if (j == 0 && ships[i][j] > '*')
				{
					if (ships[i][j + 1] > '*' && ships[i - 1][j] > '*')
					{
						counter++;
					}
				}
				else if (j == m - 1 && ships[i][j] > '*')
				{
					if (ships[i][j - 1] > '*' && ships[i - 1][j] > '*')
					{
						counter++;
					}
				}
				else if (ships[i][j] > '*')
				{
					if (ships[i][j - 1] > '*' && ships[i - 1][j] > '*' && ships[i][j + 1] > '*')
					{
						counter++;
					}
						
				}
			}
			else
			{
				if (j == 0 && ships[i][j] > '*')
				{
					if (ships[i - 1][j] > '*' && ships[i][j + 1] > '*' && ships[i + 1][j] > '*')
					{
						counter++;
					}
				}
				else if (j == m - 1 && ships[i][j] > '*')
				{
					if (ships[i - 1][j] > '*' && ships[i][j - 1] > '*' && ships[i + 1][j] > '*')
					{
						counter++;
					}
				}
				else if (ships[i][j] > '*')
				{
					if (ships[i - 1][j] > '*' && ships[i][j - 1] > '*' && ships[i + 1][j] > '*' && ships[i][j + 1] > '*')
					{
						counter++;
					}
				}
			}

		}
	}
	cout << counter;
}

int main()
{
	int n, m, i, j, counter = 0;
	cin >> n >> m;
	if (n < 1 || m > 100)
	{
		exit(0);
	}
	string *s;
	s = new string[n];

	for (i = 0; i < n; i++) 
	{
		cin >> s[i];
	}
	// char ships
	char **ships;
	ships = new char*[n];

	for (i = 0; i < n; i++) 
	{
		ships[i] = new char[m];
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++) 
		{
			ships[i][j] = s[i][j];
		}
	}

	// output of char
	/*for (i = 0; i < n; i++, cout << endl) 
	{
		for (j = 0; j < m; j++) 
		{
			cout << ships[i][j];
		}
	}*/
	

	indicator(ships, n, m);
}
