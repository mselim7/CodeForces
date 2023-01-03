#include <iostream>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;
int main() {
	long long n, a, max = 0, sub = 0, l;
	vector <long long> arr;
	cin >> l;
	while (l > 0) {
		cin >> n;
		max = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		sub = abs(arr.at(0) - arr.at(arr.size() - 1));
		for (int i = 0; i < arr.size()/2 ; i++) {
			for (int j = arr.size()-1; j > arr.size()/2; j--) {
				if (abs(arr.at(i) - arr.at(j)) == sub) {
					max++;
				}
				else {
					
					break;
				}
			}
		}
		max *= 2;
		cout << max <<endl;
		arr.clear();
		l--;
	}


}