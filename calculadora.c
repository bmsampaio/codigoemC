#include <stdio.h>

   int main (void)
{

    int opcao = 0;	
    int a = 0;
    int b = 0;

                   printf("Escolha a opcao:\n");
		   printf("1- Soma de dois numeros.\n");
		   printf("2- Diferenca entre dois numeros (maior pelo menor).\n");
		   printf("3- Produto entre dois numeros.\n");
		   printf("4- Diferenca entre dois numeros.\n");

     scanf("%i",&opcao);
       
                   printf("Escolha dois numeros:\n");
                   scanf("%i",&a);
		   scanf("%i",&b);


switch (opcao)
{
      case 1:
	      printf("A soma dos numeros:\n");
	      printf("%i\n",a+b);
      break;

      case 2:
              printf("A diferenca dos numeros:\n");
              printf("%i\n",a-b);
      break;

      case 3:
              printf("O produto dos numeros:\n");
              printf("%i\n",a*b);
      break;

      case 4:
              printf("A divisao dos numeros:\n");
              printf("%i\n",a/b);
      break;

}

     return 0;
     }
