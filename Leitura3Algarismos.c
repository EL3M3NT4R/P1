int main() {
    //Declarar Variáveis
    int userInput, unidades, dezenas, centenas;
    //Pedir um Número inteiro positivo com 3 algarismos
    printf("Introduza um número inteiro positivo com 3 algarismos");
    scanf("%d", &userInput);
    //Realizar as operações
    centenas = userInput / 100;
    dezenas = (userInput % 100 ) / 10;
    unidades = (userInput % 100) % 10;
    //Dar output dos resultados
    printf("Numero: %d\n", userInput);
    printf("%d\n %d\n %d\n", centenas, dezenas, unidades);
    return 0;
}