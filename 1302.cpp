#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {

	srand((unsigned int)time(NULL));

	int bnum;
	char bestname ;
	int bestseller = 0;
	int cnt = 0;

	cin >> bnum;

	string* bname = new string[bnum];
	int* solbook = new int[bnum];

	for (int i = 0; i < bnum; i++) {
		cin >> bname[i];
		solbook[i] = rand()%10;
		//cout << solbook[i];
		if (bestseller < solbook[i]) {	
			bestseller = solbook[i];
			bestname = bname[i].front();
		}
		else if (bestseller == solbook[i]) {
			bestname = (bestname > bname[i].front()) ? bestname : bname[i].front();
			cnt++;
		}
	}

	for (int i = 0; i < bnum; i++) {
		if (cnt < 1) {
			if (bestseller == solbook[i]) {
				cout << bname[i];
			}
		}
		else {
			if (bname[i].front() == bestname) {
				cout << bname[i];
			}
		}
	}

	delete[] bname;
	delete[] solbook;
}