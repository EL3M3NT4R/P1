int main () {
    //  Declarar variáveis
    int num1, num2, soma, diferença, produto, divisão, resto;
    // Pedir os inputs
    printf ("Introduza 2 numeros inteiros");
    scanf ("%i %i", &num1, &num2);
    // Realizar as operações
    soma = num1 + num2;
    diferença = num1 - num2;
    produto = num1 * num2;
    divisão = num1 / num2;
    resto = num1 % num2;
    // Dar output dos resultados
    printf("Numero 1: %i\n", num1);
    printf("Numero 2: %i\n", num2);
    printf("Soma = %i\n", soma);
    printf("Diferença = %i\n", diferença);
    printf("Produto = %i\n", produto);
    printf("Divisão = %i\n", divisão);
    printf("Resto Divisão = %i\n", resto);
    return 0;
}