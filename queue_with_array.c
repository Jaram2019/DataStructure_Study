#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int queue[10000];
int main() {
	int n, num, top = 0, bot = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char cmd[BUFSIZ];
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &num);
			queue[bot] = num;
			bot++;
		}
		if (strcmp(cmd, "pop") == 0) {
			if (top == bot)
				printf("-1\n");
			else {
				printf("%d\n", queue[top]);
				top++;
			}
		}
		if (strcmp(cmd, "size") == 0) {
			printf("%d\n", bot - top);
		}
		if (strcmp(cmd, "empty") == 0) {
			if (top == bot)
				printf("1\n");
			else
				printf("0\n");
		}
		if (strcmp(cmd, "front") == 0) {
			if (top == bot)
				printf("-1\n");
			else
				printf("%d\n", queue[top]);
		}
		if (strcmp(cmd, "back") == 0) {
			if (top == bot)
				printf("-1\n");
			else
				printf("%d\n", queue[bot - 1]);
		}
	}
	return 0;
}