#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {

	stack<int>s;
	int num, n, sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
		
	}

	while (1) {
		if (s.empty()) {
			break;
		}
		else {
			num = s.top();
			sum += num;
			s.pop();
		}
	}
	
	cout << sum;

}