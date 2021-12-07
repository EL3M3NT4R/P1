#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

// Variáveis constantes

const int A[3] = {1,2,2}, 
        B[5] = {1,2,3,4,5}, 
        C[2] = {2,4}, 
        D[2] = {7,8};


// Protótipos

int verifica_ordem(const int vec[], int sz);
int conta_elementos(const int v1[], const int v2[], int sz1, int sz2);
int existe_elemento(int element, const int v3[], int sz3);
int matriz_identidade(int matriz[][4], int n);
float primeiro(float v[], int sz);
float segundo(float v[], int sz);
float terceiro(float v[], int sz);


int main(){
    
    // Exercicio 1
    
    {
    printf("Exercicio 1, verificar ordem: \n");
    printf("  Vector A: %i\n", verifica_ordem(A, 3));
    printf("  Vector B: %i\n", verifica_ordem(B, 5));
    printf("  Vector C: %i\n", verifica_ordem(C, 2));
    printf("  Vector D: %i\n", verifica_ordem(D, 2));

    
    }

    // Exercicio 2
    
    {
    printf("\n\nExercicio 2, conta elementos iguais: \n");
    printf("  Vector A com B: %i\n", conta_elementos(A, B, 3, 5));
    printf("  Vector A com C: %i\n", conta_elementos(A, C, 3, 2));
    printf("  Vector A com D: %i\n", conta_elementos(A, D, 3, 2));
    printf("  Vector B com C: %i\n", conta_elementos(B, C, 5, 2));
    printf("  Vector B com D: %i\n", conta_elementos(B, D, 5, 2));
    printf("  Vector C com D: %i\n", conta_elementos(C, D, 2, 2));
    }

    // Exercicio 3

    {
    printf("\n\nExercicio 3, verifica se matriz é identidade: \n");
    int matriz_1[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    int matriz_2[4][4] = {{1,0,0,0},{0,1,0,0},{0,0,0,0},{0,0,0,0}};
    int matriz_3[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    
    printf("Matriz 1: \n");
    matriz_identidade( matriz_1,4);
    printf("Matriz 2: \n");
    matriz_identidade( matriz_2,4);
    printf("Matriz 3: \n");
    matriz_identidade( matriz_3,2);
    }

    // Exercicio 4
    {
        printf("\n\n Exercicio 4, classificação segundo o tempo de cada atleta: \n\n");
        printf("Quantos tempos pretende inserir? ");

        int tempos;
        float arrayTempos[10];
        float aux = 0;
        scanf("%i", &tempos);
        for (int a = 0; a < tempos; a++){
            printf("Tempo do atleta %i: ", (a+1) );
            scanf("%f", &aux);
            arrayTempos[a] = aux;
        }
        printf("O Primeiro classificado fez: %.2f\n", primeiro(arrayTempos, tempos));
        printf("O Segundo classificado fez: %.2f\n", segundo(arrayTempos, tempos));
        printf("O Terceiro classificado fez: %.2f\n", terceiro(arrayTempos, tempos));

    }

return 0;
}


// Função 1


int verifica_ordem(const int vec[], int sz){
    int check = vec[0];
    for (int counter = 0; counter < sz; counter++){

        if (sz == 1){
            return 1;
        } else if (check <= vec[counter]){
            check = vec[counter];
        } else {
            return 0;
        }
    }
    return 1;
}

// Função 2

int conta_elementos(const int v1[], const int v2[], int sz1, int sz2){
    int common = 0;
    for (int counter = 0; counter < sz1; counter++){
        common += existe_elemento(v1[counter], v2, sz2);
    }
    return common;

}
    // Função auxiliar

int existe_elemento(int element, const int v3[], int sz3){
    int contador = 0;
    for (int counter2 = 0; counter2 < sz3; counter2++){
        if (element == v3[counter2]){
            contador++;
        }
    }
    return contador;


}

    // Função 3

int matriz_identidade(int matriz[][4], int n){
    for (int linha = 0; linha < n; linha++){
        for (int coluna = 0; coluna < n; coluna++){
            if (linha == coluna){
                if(matriz[linha][coluna] == 0){
                    printf("Não é matriz identidade!\n");
                    return 0;
                }
            } else {
                if (matriz[linha][coluna] != 0){
                    printf("Não é matriz identidade!\n");
                    return 0;
                }
            }
        }
    }
    printf("É Matriz Identidade!!\n");
}

    // Função 4

float primeiro(float v[], int sz){
    for (int counter = 0; counter < sz; counter++){
        for (int counter2 = counter; counter2 < sz; counter2++){
            if (v[counter] > v[counter2]){
                float aux = v[counter];
                v[counter] = v[counter2];
                v[counter2] = aux;
            }
        }
    }
    return v[0];

} 

float segundo(float v[], int sz){
    for (int counter = 0; counter < sz; counter++){
        for (int counter2 = counter; counter2 < sz; counter2++){
            if (v[counter] > v[counter2]){
                float aux = v[counter];
                v[counter] = v[counter2];
                v[counter2] = aux;
            }
        }
    }
    return v[1];

} 

float terceiro(float v[], int sz){
    for (int counter = 0; counter < sz; counter++){
        for (int counter2 = counter; counter2 < sz; counter2++){
            if (v[counter] > v[counter2]){
                float aux = v[counter];
                v[counter] = v[counter2];
                v[counter2] = aux;
            }
        }
    }
    return v[2];

} 


    

