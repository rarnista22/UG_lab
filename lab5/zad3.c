#include <stdio.h>
int func(char tab[100], int i){
    printf("%d litera napisu to %c \n",i,tab[i-1]);
}
int main(void){
    char tab[100];
    int i;
    printf("Podaj dowolny napis: ");
    scanf("%s", tab);
    printf("Podaj liczbę i: ");
    scanf("%d", &i);
    func(tab, i);
}