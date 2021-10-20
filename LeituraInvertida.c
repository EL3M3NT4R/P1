int main () {
    //Declarar Variáveis
    int inteiro;
    char caracter;
    float real;
    //Pedir um input de um numero real, um caracter e um inteiro
    printf("Insira, por ordem, um número real, um carácter e um número inteiro");
    scanf("%f %c %d", &real, &caracter, &inteiro);
    //Dar output do input por ordem inversa
    printf("Real: %f\n", real);
    printf("Caracter: %c\n", caracter);
    printf("Inteiro: %d\n", inteiro);
    printf("%i %c %f\n", inteiro, caracter, real);
    return 0;
}