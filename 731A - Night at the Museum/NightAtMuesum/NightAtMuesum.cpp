// NightAtMuesum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int getLetternI(char w) {
	char alphabets[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' ,'i','j' ,'k' ,'l' ,'m'  ,'n' ,'o', 'p', 'q' ,'r', 's' ,'t', 'u' ,'v' ,'w', 'x', 'y' ,'z' };
	for (int j = 0; j < sizeof(alphabets); j++) {
		if (w == alphabets[j]) {
			return j;
		}
	}
}

int main()
{
	string word;
	int total = 0;
	int firstI;
	int secondI;
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		if (i == 0 && word.at(i)!='a') {
			firstI = getLetternI(word.at(i));
			secondI = 0;
			if (abs(firstI - secondI) < (abs(abs(firstI - secondI) - 26))) {
				total += abs(firstI - secondI);
			}
			else {
				total += abs(abs(firstI - secondI) - 26);
			}
		}
		if (i < word.size() - 1) {
			firstI = getLetternI(word.at(i));
			secondI = getLetternI(word.at(i+1));
			if (abs(firstI - secondI) < (abs(abs(firstI - secondI) - 26))) {
				total += abs(firstI - secondI);
			}
			else {
				total += abs(abs(firstI - secondI) -26);
			}
		}
	}
	cout<< total;
}
