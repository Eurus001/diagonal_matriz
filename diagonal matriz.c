#include <stdio.h>

#define FILAS 20
#define COLUMNAS 20

int main () 
{
   
    int filas, columnas;
    int A[FILAS][COLUMNAS];

    printf ("Escribe numero de filas (1-20) \n");
    scanf ("%d", &filas);
    printf ("Escribe numero de columnas (1-20) \n");
    scanf ("%d", &columnas);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++)
        {
           A[i][j]=0;
           printf ("%d\t", A[i][j]);
        }
        printf("\n\n");
    }

    printf("Segunda matriz\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++)
        {
           if (i==j){ 
               A[i][j]=1;
               printf ("%d\t", A[i][j]);
           }
           else {
              A[i][j]=0;
                printf ("%d\t", A[i][j]);
           }
        }
        printf("\n\n");
    }

    return 0;

}