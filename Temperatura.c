int main() {
    //Declarar variáveis
    float celsius, kelvin, fahrenheit;
    //Pedir um input em Celsius
    prnintf("Introduza a Temperatura em Celsius");
    scanf("%f", &celsius);
    // Efectuar os Cálculos
    kelvin = celsius + 273.15;
    fahrenheit = celsius * 9/5 + 32;
    //Dar Output dos resultados
    printf("Temperatura em graus Celsius: %f\n", celsius);
    printf("Em Kelvin: %f\n", kelvin);
    printf("Em Fahrenheit: %f\n", fahrenheit);
    return 0;
}