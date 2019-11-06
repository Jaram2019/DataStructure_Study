#include <stdio.h>
#pragma warning(disable:4996)
int gugudan[9][9];  //2 dimensional array for 9 * 9 multiplication table
int gugugudan[9][9][9];  //3 dimensional array for 9 * 9 * 9 multiplication table
void _2dgugu() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d * %d = %d\n", i + 1, j + 1, gugudan[i][j]);
		}
	}
}
void _3dgugugu() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				gugugudan[i][j][k] = (i + 1) * (j + 1) * (k + 1);
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				printf("%d * %d * %d = %d\n", i + 1, j + 1, k + 1, gugugudan[i][j][k]);
			}
		}
	}
}
int main() {
	_2dgugu();
	_3dgugugu();
	return 0;
}
