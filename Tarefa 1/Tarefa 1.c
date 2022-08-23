#include <stdio.h>
int main(){
	
	int an, a1, n, r;
	
	printf("Digite o primeiro termo: ");
	scanf("%d", &a1);
	
	printf("Digite o numero de termos: ");
	scanf("%d", &n);
	
	printf("Digite o numero da razao: ");
	scanf("%d", &r);
	
	an = a1 + (n - 1) * r;
	
	printf("O numero especifico e: %d", an);
	
	return 0;
}
