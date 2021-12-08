#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

// Variáveis constantes

int A[3] = {1,2,2}, 
        B[5] = {1,2,3,4,5}, 
        C[2] = {2,4}, 
        D[2] = {7,8};


// Protótipos

int verifica_ordem(int vec[], int sz);
int conta_elementos(int v1[], int v2[], int sz1, int sz2);
int existe_elemento(int element, int v3[], int sz3);
int matriz_identidade(int matriz[][4], int n);
float primeiro(float v[], int sz);
float segundo(float v[], int sz);
float terceiro(float v[], int sz);
float media_notas(float notas[], int sz);
float media_notasV2(float notas[], int sz);
int acumulado(int vec[], int sz, int index);
int contaRepetidos(int v[], int sz, int num);
float calcula_somatorio(float v[], int n);
void imprimir_vetor(float v[], int n);
float media(int v[]);
int minimo(int v[]);
int maximo(int v[]);




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

    // Exercicio 5
    {       
        printf("\n\nExercicio 5, devolve o acumulado de cada vector :\n");
        printf("Vector A: %i\n", acumulado(A, 3, 0) );
        printf("Vector B: %i\n", acumulado(B, 5, 0) );
        printf("Vector C: %i\n", acumulado(C, 2, 0) );
        printf("Vector C: %i\n", acumulado(D, 2, 0) );
    }

    // Exercicio 6
     {
        printf("\n\nExercicio 6, classificação do aluno durante 15 semanas :\n");
        float notas[15] = {-1, 10, 11, 12, 13, -1, 15, 8, 9, 15, 10, 12, 19, -1, 20};
        float semanas = 13;
        printf("A sua nota final foi: %.2f\n\n", media_notas(notas,15)/semanas);
    }

    // Exercicio 7
    {
        float notas[15] = {-1, 10, 11, 12, 13, -1, 15, 8, 9, 15, 10, 12, 19, -1, 20};

        printf("\n\nExercicio 7, classificação do aluno durante 15 semanas :\n");
        printf("A sua nota final foi: %.2f\n\n", media_notasV2(notas,15));
    }

    // Exercicio 8
    {    
        printf("\n\nExercicio 8, devolve repetidos :\n");
        int exemplo[] = { 1,2,3,4,4,1,3,4,-1 };
        int exemplo1[] = { 1,2,4,4,4,1,3,4,-1 };
        int exemplo2[] = { 1,2,3,4,3,4,4,4,-1 };
        int n = 4;
        printf("O numero de repetidos do numero %i é: %i\n\n", n, contaRepetidos(exemplo, 9, n));
        printf("O numero de repetidos do numero %i é: %i\n\n", n, contaRepetidos(exemplo1, 9, n));
        printf("O numero de repetidos do numero %i é: %i\n\n", n, contaRepetidos(exemplo2, 9, n));
    }

    // Exercicio 9
    {
        printf("\n\nExercicio 9, cria e soma vector :\n");
        int dimensaoVector = -1;
        float v[15];
        while ( dimensaoVector < 1 || dimensaoVector > 16)
        {
        
            printf("Indique o tamanho do vector que pretende (max = 15||min = 1): ");
            scanf(" %i", &dimensaoVector);
           
        }
        
        printf("O somatório do vector é: %.2f\n", calcula_somatorio(v, dimensaoVector));
    }

        // Exercicio 10
    {            
        printf("\n\nExercicio 10, cria vector e mostra a média, maximo, minimo, vector:\n");
        int v[10], min, max;
        float med = 0.0;
        for (int pos = 0; pos < 10; pos++)
        {
            printf("Insira o numero inteiro:  v[%i] = ", pos);
            scanf("%i", &v[pos]);
        }

        med = media(v);
        min = minimo(v);
        max = maximo(v);
        printf("A média do vector é: %.2f\n", med);
        printf("O máximo do vector é: %i\n", max);
        printf("O minimo do vector é: %i\n", min);
        
        for (int pos = 0; pos < 10; pos++){
        if (pos == 5)
        {
            printf("\n");
        }
        printf("V[%i]= %i ", pos, v[pos]);
    }
    printf("\n");
    
        
    }


return 0;
}


// Função 1


int verifica_ordem(int vec[], int sz){
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

int conta_elementos(int v1[], int v2[], int sz1, int sz2){
    int common = 0;
    for (int counter = 0; counter < sz1; counter++){
        common += existe_elemento(v1[counter], v2, sz2);
    }
    return common;

}
    // Função auxiliar

int existe_elemento(int element, int v3[], int sz3){
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

// Função 5

int acumulado(int vec[], int sz, int index){
    int soma = 0;
    for(int i = 0; i <= index; i++){
        soma += vec[i];
    }
    return soma;
}
    
// Função 6

float media_notas(float notas[], int sz){
    float aux = 0;
    for (int counter = 0; counter < sz; counter++){
        for (int counter1 = counter; counter1 < sz; counter1++){
            if (notas[counter] < notas[counter1]){
                aux = notas[counter];
                notas[counter] = notas[counter1];
                notas[counter1] = aux;
            }
        }
    }

    float soma = 0;
    for(int i = 1; i < sz-1; i++){
        soma += notas[i];
    }
    return soma;
     

}

// Função 7

float media_notasV2(float notas[], int sz){
    float aux = 0;
    for (int counter = 0; counter < sz; counter++){
        for (int counter1 = counter; counter1 < sz; counter1++){
            if (notas[counter] < notas[counter1]){
                aux = notas[counter];
                notas[counter] = notas[counter1];
                notas[counter1] = aux;
            }
        }
    }
    float nao_entregou = 0, soma = 0;
    for(int i = 0; i < sz; i++){
        if(notas[i] == -1){
            if(nao_entregou < 3){
                notas[i] = 0;
                nao_entregou++;
            }
        }
        soma += notas[i];
    }
    float semanas = 14;
    semanas -= nao_entregou;
    
    return (soma-notas[0]) / semanas;
     

}

    // Função 8

    int contaRepetidos(int v[], int sz, int num){
    int numero_repetidos = 0;
    int max = 0;
    for (int a = 0; a < sz; a++){
              
        
     if (numero_repetidos > max){
                max = numero_repetidos;
            }
        
        if (v[a] == num){
            numero_repetidos++;
           
            
        } else {
            numero_repetidos = 0;
            
        }
    }

    return max;  
        

}

    // Função 9

    float calcula_somatorio(float v[], int n){
    float soma = 0;

    for (int counter = 0; counter < n; counter++){
        float aux = 0;
        printf("Indique o valor do vector na posição %i: ",  counter);
        scanf(" %f", &aux);
        v[counter] = aux;
        soma += aux;
    }
    imprimir_vetor(v, n);
    return soma;
}

void imprimir_vetor(float v[], int n){
    int cleaner = 1;
    for (int counter = 0; counter < n; counter++){
        printf("V[%i]: %.2f  ", counter, v[counter]);
        if (cleaner == 3){
            printf("\n");
            cleaner = 0;
        }
        cleaner++;
    }
    printf("\n");
}

float media(int v[]){
    float med = 0;
    
    for (int pos = 0; pos < 10; pos++){
        med += v[pos];
    }
    
    return med/10;
}


int minimo(int v[]){
    float min = v[0];
    
    for (int pos = 1; pos < 10; pos++){
        if (min > v[pos]){
            min = v[pos];
        }
    }
    
    return min;
}
int maximo(int v[]){
    float max = v[0];
    
    for (int pos = 1; pos < 10; pos++){
        if (max < v[pos]){
            max = v[pos];
        }
    }
    
    return max;
}


    

