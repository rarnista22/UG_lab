#include <stdio.h>

int silnia(int n){
    if(n<2){
        return 1;
    }
    return n*silnia(n-1);
}
int main()
{
    int n;
    printf("Podaj liczbę: ");
    scanf("%d", &n);
    printf("N! = %d", silnia(n));
}