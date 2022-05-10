#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	
	h--;
	m += 30;
	h += m / 60;
	m %= 60;
	h += 24;
	h %= 24;

	cout << h << ' ' << m;

	return 0;
}