#include <stdio.h>

float pick_write_f(char* txt)
{
    float geral;
    printf(txt);
    scanf("%f", &geral);

    return geral;
}


#define ex11
#ifdef ex11

//Leia dois n�meros inteiros e mostre o maior deles.
int main()
{
    int a, b, maior;

    a = pick_write_f("Digite o primeiro numero\n");
    b = pick_write_f("Digite o segundo numero\n");

//if(a > b) {
//    printf("o maior numero e %d", a);
//} else {
//    printf("O maior numero e: %d", b);
//}
    maior = a > b ? a : b;
    printf("O maior numero e: %d", maior);
}
#endif // ex11

#ifdef ex12
//Leia o n�mero de identifica��o, as 3 notas obtidas
//por um aluno nas 3 verifica��es e a
//m�dia dos exerc�cios que fazem parte da avalia��o. Calcular a m�dia de
//aproveitamento, usando a f�rmula:
//MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7

int main () {



}


#endif // ex12
