#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int N, X, j;

	scanf("%d %d\n", &N, &X);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &j);

		if (j < X) {
			printf("%d ", j);
		}
	}

}