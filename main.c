#include <stdio.h>
#include <stdlib.h> //biblioteca necess�ria
#include <time.h> //biblioteca necess�ria



   int randomiza (){
    return rand ()%500; // retorna o resto da divis�o por 10, portando , 0 a 9. Pode alterar para aumentar a quantidade de numeros.
   }

   int main()
{
    srand (time(NULL)); // inicializa o gerador de n�meros aleat�rios de rand()
    printf("%i \n", randomiza());
    printf("%i \n", randomiza());
    printf("%i \n", randomiza());
    return 0;
}
