#include <stdio.h>

void Dodawanie(a,b){
    int wynik = a+b;
    printf("Wynik dodawania: %d \n", wynik);
}
void Odejmowanie(a,b){
    int wynik = a-b;
    printf("Wynik odejmowania: %d\n", wynik);
}
void Mnozenie(a,b){
    int wynik = a*b;
    printf("Wynik mnożenia: %d\n", wynik);
}
void Dzielenie(a,b){
    int wynik = a/b;
    printf("Wynik dzielenia: %d\n", wynik);
}


int main(void){
    int a,b,k;
    printf("Wybierz: \n");
    printf("1.Dodawanie\n");
    printf("2.Odejmowanie\n");
    printf("3.Mnożenie\n");
    printf("4.Dzielenie\n");
    scanf("%i", &k);
    printf("Podaj liczbę: ");
    scanf("%d", &a);
    printf("Podaj liczbę: ");
    scanf("%d", &b);

    switch(k){
        case 1:
        Dodawanie(a,b);
        break;
        case 2:
        Odejmowanie(a,b);
        break;
        case 3:
        Mnozenie(a,b);
        break;
        case 4:
        Dzielenie(a,b);
        break;
        default:
        printf("Nie wybrano prawidłowej opcji!\n");
    }    
    
}