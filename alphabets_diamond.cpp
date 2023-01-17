#include<iostream>
using namespace std;
int main()
{
	int i, j, k, rows=9, alphabet = 64;
	for (i = 1 ; i <= rows; i++ )
	{ for (j = 1 ; j <= rows - i; j++ )
		{
			cout << " ";
		}
		for (k = 1 ; k <= i * 2 - 1; k++ )
		{
			cout << char(alphabet + k);
		}
		cout << "\n";
	}
	for (i = rows - 1 ; i > 0; i-- )
	{
		for (j = 1 ; j <= rows - i; j++ )
		{
			cout << " ";
		}
		for (k = 1 ; k <= i * 2 - 1; k++ )
		{
			cout << char(alphabet + k);
		}
		cout << "\n";
	}
	return 0;
}
