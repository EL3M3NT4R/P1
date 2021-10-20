int main() {
    //declarar as variáveis
    float usd;
    float eur;
    //Pedir um input em USD e armazenar em usd
    printf("Qual o valor em usd?");
    scanf ("%f", &usd);
    //Calcular o valor em Eur
    eur = usd * 0,85;
    //Dar Output dos resultados
    printf("Valor em usd: %f\n", usd );
    printf("Em euros: %f\n", eur );
    return 0;
}