#include <iostream>
using namespace std;
int main() {
	int a, b,c=0;
	cin >> a >> b;
	while (a <= b)
	{
		b *= 2;
		a *= 3;
		c++;
	}
	cout << c;
}
