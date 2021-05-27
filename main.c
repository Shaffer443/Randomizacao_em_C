#include <stdio.h>
#include <stdlib.h> //biblioteca necessária
#include <time.h> //biblioteca necessária



   int randomiza (){
     
    return rand ()%1000; // retorna o resto da divisão por 1000, portando , 0 a 1000. Pode alterar para aumentar a quantidade de numeros.
   }

   int main()
{
    srand (time(NULL)); // inicializa o gerador de números aleatórios de rand()
    printf("%i \n", randomiza());
    printf("%i \n", randomiza());
    printf("%i \n", randomiza());
    return 0;
}