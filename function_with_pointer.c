#include <stdio.h>
#pragma warning(disable:4996)
void snptr(int* fst, int* snd){
	int tmp;
	tmp = *fst;
	*fst = *snd;
	*snd = tmp;
}
void sn(int fst, int snd) {
	int tmp;
	tmp = fst;
	fst = snd;
	snd = tmp;
}
int main()
{
	int n1 = 2019;
	int n2 = 2000;
	printf("original:\n%d %d\n", n1, n2);
	sn(n1, n2);
	printf("swap number without pointer:\n%d %d\n", n1, n2);
	snptr(&n1, &n2);
	printf("swap number with pointer:\n%d %d\n", n1, n2);
	return 0;
}