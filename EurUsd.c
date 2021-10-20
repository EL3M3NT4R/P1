int main() {
    //declarar as variáveis
    float usd;
    float eur;
    //Pedir um input em Euros e armazenar em eur
    printf("Qual o valor em eur?");
    scanf ("%f", &eur);
    //Calcular o valor em Dólares
    usd = eur / 0,85;
    //Dar Output dos resultados
    printf("Valor em eur: %f\n", eur );
    printf("Em Dolares: %f\n", usd );
    return 0;
}