#include <stdio.h>

#define MAX SIZE 100

void inserirOrdenado(int lista[], int tamanho, int elemento){
	int i, j;
	
	if(*tamanho >= MAX SIZE){
		printf("\nA lista esta cheia. Nao eh possivel inserir elementos.")
		return;
	}
	
	for (i = 0; i < *tamanho; i++){
		if (elemento < lista[i]){
			for (j = *tamanho; j > i; j--){
				lista[j] = lista[j-1];
			}
			break;
		}
	}
	lista[i] = elemento;
	(*tamanho)++;
}

int main() {
	int lista[MAX_SIZE];
	int tamanho = 0;
	
	inserirOrdenado(lista, &tamanho, 3);
	inserirOrdenado(lista, &tamanho, 8);
	inserirOrdenado(lista, &tamanho, 4);
	inserirOrdenado(lista, &tamanho, 2);
	inserirOrdenado(lista, &tamanho, 5);
	
	printf("\n Lista ordenada: ");
	for (int i = 0; i < tamanho; i++){
		printf("\n%d", lista[i]);
	}
	printf("\n");
	
	return 0;
}
