#include <stdio.h>

int EhPrimo(int numero){
	
	
};

int main(){
	int tamanho = 9;
	int vetor[tamanho];
	
	for(int i = 0; i < tamanho; i ++){
		scanf("%d", &vetor[i]);
	};
	
	for(int i = 0; i < tamanho; i++){
		int numero = vetor[i];
		if(numero == 2 ){
			printf("o numero %d é primo indice = %d \n", numero, i );
		}
	if(numero == 3 ){
			printf("o numero %d é primo indice = %d \n", numero, i );
		}
		if(numero == 5 ){
			printf("o numero %d é primo indice = %d \n", numero, i );
		}
	}

}
