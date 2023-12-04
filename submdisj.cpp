#include <fstream>
using namespace std;
int main()
{
	ifstream f("submdisj.in");
	int n;
	f >> n;
	f.close();
	int a[n][n], i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = n*i+j+1;
	ofstream g("submdisj.out");
	for (int k = 0; k < n; k++)
	{
		for (i = k, j = 0; i < n && j < n-k; i++, j++)
			g << a[i][j] << ' ';
		for (i = 0, j = n-k; i < k; i++, j++)
			g << a[i][j] << ' ';
		g << '\n';
	}
	g.close();
	return 0;
}

