#include <stdio.h>
#include <math.h>

int main()
{
   int int1, int2, contador = 0; 
   
   printf("\tNúmeros primos em um intervalo!\n\n");
   
   printf("Digite um intervalo para se analisar quantos e quais são os números primos tem dentro dele");
   
   printf("\n\nMenor valor: ");
   scanf("%d", &int1);
   
    printf("\nMenor valor: ");
   scanf("%d", &int2);
   
   for(int num = int1; num <= int2; num++){
       
       int primo = 1;
       
       if(num <= 1){
           primo = 0;
       } else {
           for (int i = 2; i <= sqrt(num); i++){
               
               if(num % i == 0){
                   primo = 0;
                   break;
               }
           }
       }
       
       if (primo){
           contador++;
       }
   }
   
   printf("Total de números primos é %d", contador);
   
   return 0;
}