#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 6

int main(){
	int A[N];
	for(int i = 0;i<N;i++){
		printf("Digite o %do valor:\n", i+1);
		scanf("%d", &A[i]);
		system("cls");
	}
	printf("Vetor:\n%d\n%d\n%d\n%d\n%d\n%d", A[0], A[1], A[2], A[3], A[4], A[5], A[6]);
	
	getch();
}
