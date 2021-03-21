#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int A[6] = {1,0,5,-2,-5,7}, somaValores = 0;
	somaValores = A[0]+A[1]+A[5];
	printf("A soma dos valores = %d\n\n", somaValores);
	A[3]=100;
	printf("Vetor:\n%d\n%d\n%d\n%d\n%d\n%d", A[0], A[1], A[2], A[3], A[4], A[5], A[6]);
	
	getch();
}
