#include <stdio.h>
float pick_write_f(char* txt)
{
    float geral;
    printf(txt);
    scanf("%f", &geral);

    return geral;
}

#define ex4
#ifdef ex1
//Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 25, o segundo deve
//ser maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto � o
//produto dos tr�s n�meros anteriores. Calcule e exiba a soma dos quadrados de cada um
//dos quatro n�meros. Caso o resultado seja menor que 50000, solicite novos dados.

int main ()
{
    int num1, num2, num3, num4, quadrado;
    do
    {
        do
        {
            num1 = pick_write_f("Digite o primeiro numero de 10 a 25\n");
        }
        while(num1 < 9 || num1 > 26);

        do
        {
            num2 = pick_write_f("Digite o segundo numero\n");
        }
        while(num2 < 0);

        num3 = num1 + num2;
        printf("Soma dos dois primeiros numeros = %d\n", num3);
        num4 = num1 * num2 * num3;
        printf("Produto dos tres ultimos numeros =  %d\n", num4);
        quadrado = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4);
        printf("Potencia dos quatro ultimos numeros = %d\n", quadrado);
    }
    while(quadrado > 50000);
}
#endif // ex1

#ifdef ex2
//Leia o n�mero de identifica��o, as 3 notas obtidas por
//um aluno nas 3 verifica��es e a m�dia dos exerc�cios que fazem parte da avalia��o.
//Calcular a m�dia de aproveitamento, usando a f�rmula:
//MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7
//9,0 >> A
//7,5 e < 9,0 >> B
//6,0 e < 7,5 >> C
//4,0 e < 6,0 >> D
//< 4,0 >> E
//O algoritmo deve escrever o n�mero do aluno, suas notas, a m�dia dos exerc�cios,
//a m�dia de aproveitamento, o conceito correspondente e a
//mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.

int main()
{
    float notas[3], media, mediaaproveitamento, num_ident;
    int i;
    char conceito;

    num_ident = pick_write_f("Digite o numero de identificacao do aluno\n");

    for(i = 0; i < 3; i ++)
    {
        do
        {
            notas[i] = pick_write_f("Digite a nota do aluno: \n");
            if (notas[i] < 0 || notas[i] > 10)
                printf("Nota invalida, por favor digite um numero de 0 a 10\n\n");
        }
        while(notas[i] < 0 || notas[i] > 10);
    }
    media = (notas[0] + notas[1] + notas[2]) / 3;
    printf("Media: %.1f\n", media);

    mediaaproveitamento = (notas[0] + (notas[1] * 2) + (notas[2] * 3) + media) / 7;
    printf("Media aproveitamento: %.1f\n", mediaaproveitamento);

    if(mediaaproveitamento >= 9.0)
    {
        conceito = 'A';
    }
    else if(mediaaproveitamento >= 7.5 && mediaaproveitamento < 9)
    {
        conceito = 'B';
    }
    else if(mediaaproveitamento >= 6 && mediaaproveitamento < 7.5)
    {
        conceito = 'C';
    }
    else if(mediaaproveitamento >= 4 && mediaaproveitamento < 6)
    {
        conceito = 'D';
    }
    else if(mediaaproveitamento < 4)
    {
        conceito = 'E';
    }

    printf("A media dos exercicios do aluno %d e: %g; \nA media de aproveitamento do aluno e: %g; \n", num_ident, media, mediaaproveitamento);

    if(conceito == 'A' || conceito == 'B' || conceito == 'C')
    {

        printf("Ele esta: Aprovado;\nSe encaixa no conceito: %c", conceito);
    }
    else if(conceito == 'D' || conceito =='E')
    {
        printf("Ele esta: Reprovado;\nSe encaixa no conceito: %c", conceito);
    }
    return 0;
}
#endif // ex2

#ifdef ex3
//Escrever um algoritmo que leia tr�s n�meros quaisquer e
//informe qual � o maior e se eles forem todos iguais
//informe ao usu�rio e solicite novos dados.

int main()
{
    int num1, num2, num3;

    while(1)
    {
        printf("Digite tres numeros: \n");
        scanf("%d %d %d", &num1, &num2, &num3);

        if (num1 == num2 && num2 == num3)
        {
            printf("Os numeros sao iguais. Por favor, insira novos numeros.\n");
        }
        else
        {
            int maior = num1;

            if (num2 > maior)
            {
                maior = num2;
            }
            if (num3 > maior)
            {
                maior = num3;
            }

            printf("O maior numero e: %d\n", maior);

            break;
        }
    }

    return 0;
}
#endif // ex3


#ifdef ex4
//4.Receba tr�s n�meros que representam os lados de um tri�ngulo e
//garantam a exist�ncia de um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.
//Observa��es:
//a.Garantir que cada lado � menor que a soma dos outros dois lados.
//b.O tri�ngulo � equil�tero quando todos os lados s�o iguais.
//c.O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
//O tri�ngulo � escaleno quando todos os lados s�o diferentes.

int main ()
{
    float l1, l2, l3;
    int controle = 0;

//armazenagem dos valores
    do
    {
        l1 = pick_write_f("Digite o primeiro lado\n");
        l2 = pick_write_f("Digite o segundo lado\n");
        l3 = pick_write_f("Digite o terceiro lado\n");

//verifica��o do valor de cada lado ser menor que a soma dos outros dois
        controle = 0;
        printf("%d\n", l1 < l2 + l3);
        if ((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2))
        {
            printf("Os lados formam um triangulo.\n");
            controle = 1;
        }
        else
        {
            printf("Os lados nao formam um triangulo.\n");
            controle = 0;
        }
    }
    while(controle == 0);


//tri�ngulo equil�tero
    if(l1 == l2 && l2 == l3)
    {
        printf("O triangulo e equilatero");
    }

//is�celes
    else if((l1 == l2) || (l2 == l3) || (l1 == l3))
    {
        printf("Triangulo isoceles");
    }

    else if((l1 != l2) && (l2 != l3) && (l3 != l1))
    {
        printf("Triangulo escaleno");
    }
}
#endif // ex4
