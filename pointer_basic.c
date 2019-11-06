#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int num;        //declares an int variable 
	int* nptr;      //declares a pointer to an int
	num = 2018;
	nptr = &num;
	printf("%d\n", num);   //print out value of variable
	printf("%p\n", &num);  //print out address of variable(reference)
	printf("%p\n", nptr);  //print out address of variable
	printf("%d\n", *nptr); //print out value of variable(dereference)
	return 0;
}