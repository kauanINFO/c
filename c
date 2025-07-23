a)#include <stdio.h>

int main() {
    // Retângulo 10 por 7
    printf("**********\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("*        *\n");
    printf("**********\n");

    // Retângulo 7 por 5
    printf(" ***\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf("*   *\n");
    printf(" ***\n");

    // Árvore
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    printf("   *\n");
    printf("   *\n");

    // Losango
    printf("-------------\n");
    printf("      *\n");
    printf("    *  *\n");
    printf("   *    *\n");
    printf("  *      *\n");
    printf("   *    *\n");
    printf("    *  *\n");
    printf("      *\n");

    return 0;
}



b)#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome[50], sobrenome[50];

    // Entrada de dados
    printf("Qual seu nome: ");
    scanf("%49s", nome);

    printf("Qual seu sobrenome: ");
    scanf("%49s", sobrenome);

    // Saída de dados
    printf("O seu nome ao contrário é %s %s\n", sobrenome, nome);

    return 0;
}



c)#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero1, numero2, soma, sub, multi, divi, resto;

    // Entrada de dados
    printf("Escreva o primeiro número: ");
    scanf("%d", &numero1);

    printf("Escreva o segundo número: ");
    scanf("%d", &numero2);

    // Processamento
    soma = numero1 + numero2;
    sub = numero1 - numero2;
    multi = numero1 * numero2;
    divi = numero1 / numero2;
    resto = numero1 % numero2;

    // Saída de dados
    printf("A soma é %d\n", soma);
    printf("A subtração é %d\n", sub);
    printf("A multiplicação é %d\n", multi);
    printf("A divisão é %d\n", divi);
    printf("E o resto é %d\n", resto);

    return 0;
}


d)#include <stdio.h>

int main() {
    // Declaração de variáveis
    float celsius, fahrenheit;

    // Entrada de dados
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Processamento
    fahrenheit = (9 * celsius + 160) / 5;

    // Saída de dados
    printf("A temperatura em Fahrenheit é %.2f\n", fahrenheit);

    return 0;
}



e)#include <stdio.h>

int main() {
    // Declaração de variáveis
    float celsius, fahrenheit;

    // Entrada de dados
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Processamento
    celsius = ((fahrenheit - 32) * 5) / 9;

    // Saída de dados
    printf("A temperatura em Celsius é %.2f graus Celsius\n", celsius);

    return 0;
}



f)#include <stdio.h>

int main() {
    // Declaração de variáveis
    float raio, altura, volume;
    const float pi = 3.14f;

    // Entrada de dados
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    // Processamento
    volume = raio * pi * altura;

    // Saída de dados
    printf("O valor do volume interno do recipiente é %.2f L\n", volume);

    return 0;
}
