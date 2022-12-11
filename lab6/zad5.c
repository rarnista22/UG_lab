#include <stdio.h>

int bin(int a){
    if(a>2){
        bin(a/2);
        printf("%d", a%2);
    }
}
int main(){
    int a;
    printf("Podaj liczbę: ");
    scanf("%d", &a);
    printf("%d", bin(a));
}