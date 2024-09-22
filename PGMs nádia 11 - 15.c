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

//Leia dois números inteiros e mostre o maior deles.
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
//Leia o número de identificação, as 3 notas obtidas
//por um aluno nas 3 verificações e a
//média dos exercícios que fazem parte da avaliação. Calcular a média de
//aproveitamento, usando a fórmula:
//MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7

int main () {



}


#endif // ex12
