#include<iostream>
using namespace std;
int main() {
	int n;
	int min = 0;
	int R = 0, G = 0, B = 0;
	string s;
	string s2;
	cin >> n;
	cin >> s;
	s = s.substr(0, n);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			s2 += s[i];
		}
	}
	for (int i = 0; i < s2.size(); i++)
	{
		if (s2[i] == 'R') { R++; }
		else if (s2[i] == 'G') { G++; }
		else if (s2[i] == 'B') { B++; }
	}
	min = R + G + B;
	cout << min << endl;
}