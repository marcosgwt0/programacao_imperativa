/*****************************************************************
 PBL C1

Grupo PBL 1 6
Nome: Marcos Gabriel Wonsovicz Troiano
Nome: Gabriela Apetz Lima
Nome: Pedro Guimaraes Lopes Martins
******************************************************************/


/*****************************************************************

       Exercicio 1

******************************************************************/

#include <stdio.h> 

int main(){
	
	int an, a1, n, r;
	printf("Exercicio 1 \n");
	printf("\n");
	
	printf("Digite o primeiro termo: ");
	scanf("%d", &a1);
	
	printf("Digite o numero de termos: ");
	scanf("%d", &n);
	
	printf("Digite o numero da razao: ");
	scanf("%d", &r);
	
	an = a1 + (n - 1) * r;
	
	printf("O numero especifico e: %d \n", an);
	
	printf("---------------------------------------------------------------- \n");

/*****************************************************************

       Exercicio 2

******************************************************************/

	
	int c, e, v, lista;
	printf("Exercicio 2 \n");
	printf("\n");
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
