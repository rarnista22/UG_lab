#include <stdio.h>
int main()
{
    int a,b,dodawanie,odejmowanie,iloczyn,iloraz,reszta_dzielenia;

    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);
    dodawanie = a+b;
    odejmowanie = a-b;
    iloczyn = a * b;
    iloraz = a / b;
    reszta_dzielenia = a % b;
    printf("Wynik dodawania:%d\n", dodawanie);
    printf("Wynik odejmowania:%d\n", odejmowanie);
    printf("Wynik mnożenia:%d\n", iloczyn);
    printf("Wynik dzielenia:%d\n", iloraz);
    printf("Reszta z dzielenia:%d\n",reszta_dzielenia);
    return 0;
}