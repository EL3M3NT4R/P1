int main() {
    //Declarar variáveis
    float userInput, userOutput;
    int aux;
    //Pedir um input de um numero real
    printf("Introduza um número real");
    scanf("%f", &userInput);
    //Realizar as operações
    userOutput = userInput * 1000;
    aux = (int) userOutput;
    userOutput = aux / 1000.0;
    //Dar output dos resultados
    printf("Numero Inserido: %f\n", userInput);
    printf("Numero com 3 casas decimais: %f\n", userOutput);
    return 0;
}