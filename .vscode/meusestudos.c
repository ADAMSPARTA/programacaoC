#include <stdio.h>

int idade = 25;
int quantidade = 1;
float altura = 1.75;
double peso 90.5;
char opcao = 'S';
char nome[20] 'sergio';

printf("A idade é: %s  %d\n", nome, idade);
printf("A altura é: %e\n", altura);
printf("A opcao é: %c\n", opcao);

 /*int idade = 39;
    char letra[10] = "A";
    int quantidade = 1;
    float altura = 1.75;
    double peso = 72;
    char nome[20] = "Douglas";

    printf("Nome: \n");
    scanf("%s", &nome);
    
    printf("Letra: \n");
    scanf("%s", &letra);
    
    printf("Idade: \n");
    scanf("%d", &idade);

    printf("Quantidade: \n");
    scanf("%d", &quantidade);

    printf("Altura: \n");
    scanf("%f", &altura);

    printf("Peso: \n");
    scanf("%lf", &peso);

        
    printf("\n Dados do Aluno \n");
    
    printf("Nome: %s\nLetra: %s\n", nome, letra);
    printf("Idade: %d\nQuantidade: %d\n", idade, quantidade);
    printf("Altura: %.2lf\nPeso: %.2lf\n", altura, peso);
    




    printf(" Jogo das Cartas");
    char estado;
    char carta[];
    char cidade[];
    int populacao;
    float area;
    int pib;
    int pontos turisticos;

    ///Operadores matematicos

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Entre com o numero1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero2: \n");
    scanf("%d", &numero2);
 
    //operacao soma
    soma = numero1 + numero2;
    //operacao subtracao
    subtracao = numero1 - numero2;
    //operacao multiplicacao
    multiplicacao = numero1 * numero2;
    // operacao divisao
    divisao = numero1 / numero2;

    printf ("A Soma é: %d\n", soma);
    printf ("A Subtracao é: %d\n", subtracao);
    printf ("A Mutiplicacao é: %d\n", multiplicacao);
    printf ("A Divisao é: %d\n", divisao);

    Atribuicao simplis (=)
    Atribuicao soma (+=)
    Atribuicao subtracao (-=)
    Atribuicao multiplicacao (*=)
    Atribuicao divisao (/=)

    int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    // resulta = resultado + 20;
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado * 5;
    resultado *= 5;
    printf("Resultado: %d\n", resultado);
    
    //resultado = resultado / 2;
    resultado /= 2;
    printf("Resultado: %d\n", resultado);

    //incremento (++) e decremento(--);

    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferença = a - b;
    int produto = a * b;
    int quociente = a / b; //note que a divisao de inteiros resulta em um numero  inteiro

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferença);
    printf("Produto: %d\n", produto);
    printf("Qouciente: %d\n", quociente);

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferença = x - y;
    float produto = x * y;
    float quociente = x / y; //Divisao de ponto flutuante

    printf("Soma: %.2f\n", soma);
    printf("diferença: %.2f\n", diferença);
    printf("produto: %.2f\n", produto);
    printf("quociente: %.2f\n", quociente);

    int a = 10;
    int b = 3;
    float quociente = (float) a / b;
    //'a' é explicitamente cpnvertido para float

    printf("Quociente: %.2f\n", quociente);

    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Media ***\n");
   
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("A media é: %.2f\n", media);


    //ou com conversao media = (float)(nota1 + nota2 + nota3) / 3;

    int nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;
    printf("A media é: %.2f\n", media);

     /*Tipos de dados e modificadores de tipo
     Aula Mestre

    int = Valores maximos positivos e negativos(-2.147.483.648 a 2.147.483.647)

    unsigned int = modificador valores maximos positivos (0 a 4.294.967.295)

    char = valores maximos (-128a127)

    unsigned char = modificador valores maximos (0a255)

    long int = modificador valores maximos (-9,223,372,036,854,775,808 a 9,223,372,036,854,775,807)

    double = valores maximos (±1.7E-308 a ±1.7E+308)

    long double = modificador valores maximos (±3.4E-4932 a ±1.1E+4932)

    printf("\n Tamanho das variaveis \n");

    printf("Tamanho de int: %u bytes\n", sizeof(int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tamanho de long double %u bytes\n", sizeof(long double));
    printf("short int: %lu B - int: %lu B - long int: %lu B\n", sizeof(int), sizeof(short int), sizeof(int), sizeof(long long int));
    printf("Float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));
    
    /*O tamanho dessas variaveis e modificadores de bytes,
     podem ter valores distintos para cada programa pra executar*/   

     /*//Operadores de comparação ou relacionais
    > (maior que)
    < (menor que)
    >= (maior ou igual a)
    <= (menor ou igual a)
    == (igual a)
    != (diferente de)

    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b); //0 (falso)
    printf("a < b: %d\n", a < b); //1 (verd)
    printf("a == b: %d\n", a == b); //0 (falso)
    printf("a != b: %d\n", a != b); //1 (verd)
    printf("a >= b: %d\n", a >= b); //0 (falso)
    printf("a <= b: %d\n", a <= b); //1 (verd)

    int x = 5;
    float y = 5.0;
    char c = 'a';
    
    
    printf("x == y: %d\n", x == y); //1 (verdadeiro)
    printf("x != y: %d\n", x != y); //0 (falso)
    printf("x > y: %d\n", x > y); //0 (falso)
    printf("x < y: %d\n", x < y); //0 (falso)
    printf("x >= y: %d\n", x >= y); //1 (verdadeiro)
    printf("x <= y: %d\n", x <= y); //1 (verdadeiro)

    printf("x >= c: %d\n", x >= c); //0 (falso)
    printf("O valor ASCII de %c é: %d\n", c, c); //O valor ASCII de 'a' é: 97

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2); //1 (verdadeiro)
    printf("numero1 == numero2: %d\n", numero1 == numero2);//0 (falso)

    //agora vamos usar uma variavel do tipo int para conversão explicita
    printf("numero1 > numero2: %d\n", (int)numero1 > numero2); //0 (falso)
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2); //1 (verdadeiro)*/
 
    //Hora de codar
    //Declarar variaveis Produto, u i estoque, double valor unitario,
    // u i estoque minimo, double valor total em estoque 
    
    /*char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMininoA = 500;
    unsigned int estoqueMininoB = 2500;

    double valorTotalA;
    double valorTotalB;
 
    int resultadoA, resultadoB; 

    //Exibir as informações dos produtos
    printf("Produto: %s tem estoque %u e o valor unitario é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto: %s tem estoque %u e o valor unitario é R$%.2f\n", produtoB, estoqueB, valorB);

    //Comparações com valor minimo de estoque
    resultadoA = estoqueA > estoqueMininoA;
    resultadoB = estoqueB > estoqueMininoB;

    printf("%s tem estoque A é: %d\n", produtoA, resultadoA);
    printf("%s tem estoque B é: %d\n", produtoB, resultadoB);

    //Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)?: %d\n",
        estoqueA * valorA, estoqueB * valorB, estoqueA * valorA > estoqueB * valorB);*/
     
