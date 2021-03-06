#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, result, n_num1, cnt = 0;
	scanf("%d", &num);
	n_num1 = num;

		while(1){
			result = (n_num1 / 10) + (n_num1 % 10);
			n_num1 = (10 * (n_num1 % 10)) + (result%10);
			cnt++;
			if (n_num1 == num) {
				printf("%d", cnt);
				break;
			}
		}
}