#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char ar[8][8] = {};
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%c", &ar[i][j]);
			if (j % 2 == 0 && j == 'F') {
				cnt++;
			}
		}
	}

	if()
}