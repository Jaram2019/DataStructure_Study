#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int stack[10000];
int main() {
	int n, num, top = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char cmd[BUFSIZ];
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &num);
			stack[top] = num;
			top++;
		}
		if (strcmp(cmd, "pop") == 0) {
			if (top <= 0)
				printf("-1\n");
			else {
				printf("%d\n", stack[top - 1]);
				top--;
			}
		}
		if (strcmp(cmd, "size") == 0) {
			printf("%d\n", top);
		}
		if (strcmp(cmd, "empty") == 0) {
			if (top <= 0)
				printf("1\n");
			else
				printf("0\n");
		}
		if (strcmp(cmd, "top") == 0) {
			if (top <= 0)
				printf("-1\n");
			else
				printf("%d\n", stack[top - 1]);
		}
	}
	return 0;
}