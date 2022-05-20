#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int ingresa2=0;

    printf("INGRESAR TAMAÑO: ");
    scanf("%d",&ingresa2);
    int tamano[ingresa2];
    int numero [ingresa2];
    if(ingresa2 % 2 == 0 ){
    srand(time(NULL));
    for(int i=0;i<ingresa2;i++){
        tamano[i]= rand()%100;
        printf("Numeros: %d\n",tamano[i]);
      }
           for(int y=0; y<ingresa2;y++){
           if(y % 2== 0){

            printf("Posicion pares: %d El contenido: %d ",y,tamano[y]);
            printf("\n");
            }else{
            int impar[y];
            printf("Posicion impares: %d El contenido: %d ",y,tamano[y]);
            printf("\n");
            }
         }
    }else{
    printf("el numero es impar: %d");
    }

      return 0;
}



