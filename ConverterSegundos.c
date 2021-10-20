int main() {
    //declarar variáveis
    int userInput, dias, horas, minutos, segundos;
    //Pedir um Input de Segundos
    printf("Introduza um valor em segundos");
    scanf("%d", &userInput);
    //Realizar as operações
    dias = userInput / (60 * 60 * 24);
    horas = (userInput % (60 * 60 * 24)) / 3600;
    minutos = ((userInput % (60 * 60 * 24)) % 3600) / 60;
    segundos = ((userInput % (60 * 60 * 24)) % 3600) % 60;
    //Dar output dos Resultados
    printf("Quantos Segundos: %d\n", userInput);
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    return 0;
}