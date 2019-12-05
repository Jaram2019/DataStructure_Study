#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
typedef struct node {
	int info;
	struct node* link;
} Node;

int main(void) {
	Node* head = NULL;

	head = (Node*)malloc(sizeof(Node));
	head->info = 0;
	head->link = NULL;
	Node* body[5] = { NULL, };
	
	int tmp;
	for (int i = 0; i < 5; i++) {
		body[i] = (Node*)malloc(sizeof(Node));
		scanf("%d", &tmp);
		if (i == 0) {
			head->link = body[0];
		}
		else {
			body[i - 1]->link = body[i];
		}
		body[i]->info = tmp;
	}
	printf("%d\n", body[2]->info);
	printf("%d\n", body[3]->info);
	printf("%d\n", body[4]->info);
	return 0;
}