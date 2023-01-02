#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<string> g1;
	int n;
	string s, s2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		g1.push_back(s);
	}
	for (int i = 0; i < n; i++) {
		s2 = g1[i];
		if (s2.size() > 10)
		{
			cout << s2[0]<< s2.size()-2 << s2[s2.size() - 1] << endl;
		}
		else cout << s2 << endl;

	}
}