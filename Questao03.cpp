#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define N 10

int main(){
	float numReais[N], quad[N];
	
	for(int i = 0;i<N;i++){
		printf("Digite o %do valor:\n", i+1);
		scanf("%f", &numReais[i]);
		system("cls");
	}
	for(int i = 0;i<N;i++){
		quad[i]=pow(numReais[i],2);
	}
	printf("Conjunto 1 = {");
	for(int i = 0;i<N;i++){
		printf("%.2f", numReais[i]);
		if(i!=(N-1)){
			printf(" - ");
		}
	}
	printf("}");
	printf("\n\nConjunto 2 = {");
	for(int i = 0;i<N;i++){
		printf("%.2f", quad[i]);
		if(i!=(N-1)){
			printf(" - ");
		}
	}
	printf("}");
	
	
	getch();
}
