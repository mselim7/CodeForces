#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int min = 0;
	while (n >= 100)
	{
		n -= 100;
		min++;
	}
	while (n >= 20)
	{
		n -= 20;
		min++;
	}
	while (n >= 10)
	{
		n -= 10;
		min++;
	}
	while (n >= 5)
	{
		n -= 5;
		min++;
	}
	while (n >= 1)
	{
		n--;
		min++;
	}
	cout << min;
}