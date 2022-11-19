#include <stdio.h>
int main()
{
    int liczba,i;
    i=1;
    printf("########## Odgadnij liczbę z przedziału [1-5]! Masz trzy szanse! ##########\n");
    while(i<=3){
        printf("Podaj liczbę:\n");
    scanf("%d", &liczba);
        if(liczba==4){
            printf("Odgadnięto liczbę!");
            break;
        }
        else if(liczba<1||liczba>5){
            printf("Liczba poza przedziału 1-5\n");
            i+=1;
        }
        else{
            printf("Zagduj dalej!\n");
            i+=1;
        }
        if(i==4){
            printf("Nie odgadnięto!");
        }
    }
}