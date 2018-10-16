//Brunp Portilla Hinojosa
//ITESM
#include<stdio.h>
#include<conio.h>
int main(){
    int matrizA[100][100];
    int matrizB[100][100];
    int suma[100][100];
    int filas;
    int columnas;
    //Explico lo que hace el programa y pido las dimesiones de las 2 matrices.
    printf("En este programa haremos dos matrices del mismo tamaño y asignaremos valores para sumarlas.\n");
    printf("Numero de filas de las 2 matrices: ");scanf("%i",&filas);
    printf("Numero de columnas de las 2 matrices: ");scanf("%i",&columnas);
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("Asigne el valor de [%i][%i] en la primera matriz: ",i+1,j+1);
            scanf("%i",&matrizA[i][j]);
        }
    }

    printf("\n");
    for(int i = 0; i < filas; i++){
        for(int j = 0;j < columnas; j++){   //asigno los valores de la primera matriz
            printf("Asigne el valor de [%i][%i] en la segunda matriz: ",i+1,j+1);
            scanf("%i",&matrizB[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < filas; i++){         //asigno el valor de la segundo matriz
        for(int j = 0; j < columnas; j++){
            suma[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    printf("\n");
    printf("La suma de las dos matrices es:\n"); //muestro la suma de las 2 matrices.
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("%i ",suma[i][j]);
        }

    }

    return 0;
} 