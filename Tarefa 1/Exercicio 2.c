#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho 4
#define numeros 4

int main(){
	
	int c, e, v, lista;
	
	printf("Digite quatro algarismos: ");
	scanf("%d", &lista);
	
    e=lista/1000;
    c=lista/100%10;
    v=lista%100;
	
	printf("O algarismo correspondente a estado e: %d", e);
	printf("\n");
	
	printf("O algarismo correspondente ao cidade e: %d", c);
	printf("\n");
	
	printf("Os algarismos correspondentes ao veiculo sao: %d", v);
	printf("\n");
	
	printf("A placa do veiculo correspondente e: %d", lista);
	printf("\n");
	
	return 0;
}
