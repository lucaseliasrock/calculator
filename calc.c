#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num1, num2, op, res;

	printf("Digite\n1 para somar\n2 para subtrair\n3 para dividir\n4 para multiplicar: \n");
	scanf("%d", &op);

	printf("Digite o primeiro número:\n");
	scanf("%d", &num1);

	printf("Digite o segundo número:\n");
	scanf("%d", &num2);

	if(op == 1){
		res = num1+num2;
		printf("Resultado Soma: %d \n", res);
	}else if(op == 2){
		res = num1-num2;
		printf("Resultado Subtração: %d \n", res);
	}else if(op == 3){
		res = num1/num2;
		printf("Resultado Divisão: %d \n", res);
	}else if(op == 4){
		res = num1*num2;
		printf("Resultado Multiplicação: %d \n", res);
	}
return 0;

}