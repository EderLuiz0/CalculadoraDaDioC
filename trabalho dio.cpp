#include <stdio.h>
main(){
int resultado1, num4, num3;
float num1, num2, resultado;
char simbolo;
printf("digite o simbolo para realizar as operacoes aritimetica: \n");
printf("+ para adição\n");
printf("- para subtracao\n");
printf("* para multiplicacao\n");	
printf("/ para divisao\n");	
printf("%% para mod\n");
scanf("%c", &simbolo);
switch(simbolo){
	case '+':
		printf("digite o primeiro numero: \n");
		scanf("%f",&num1);
		printf("digite o segundo numero:\n");
		scanf("%f",&num2);
		resultado = num1 + num2;
		printf("o resultado e:%f",resultado);
	break;
	case '-':
		printf("digite o primeiro numero: \n");
		scanf("%f",&num1);
		printf("digite o segundo numero:\n");
		scanf("%f",&num2);
		resultado = num1 - num2;
		printf("o resultado e:%f",resultado);
	break;
		case '*':
		printf("digite o primeiro numero: \n");
		scanf("%f",&num1);
		printf("digite o segundo numero:\n");
		scanf("%f",&num2);
		resultado = num1 * num2;
		printf("o resultado e:%f",resultado);
	break;	
		case '/':
		printf("digite o primeiro numero: \n");
		scanf("%f",&num1);
		printf("digite o segundo numero:\n");
		scanf("%f",&num2);
		resultado = num1 / num2;
		printf("o resultado e:%f",resultado);
		break;	
		case '%':
		printf("digite o primeiro numero: \n");
		scanf("%d",&num3);
		printf("digite o segundo numero:\n");
		scanf("%d",&num4);
		resultado1 = num3 % num4;
		printf("o resultado e:%d",resultado1);
	break;
	default:
	printf("erro digite um simbolo valido");			
}
}
