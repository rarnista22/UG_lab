#include <stdio.h>
int main()
{
    int liczba;
    printf("Podaj liczbę: ");
    scanf("%d", &liczba);
    if(liczba%2==0){
        printf("Liczba dzieli sie przez 2\n");
    }
    else if(liczba%3==0){
            printf("Liczba dzieli się przez 3\n");
            }
    else if(liczba%4==0){
            printf("Liczba dzieli się przez 4\n");
    }
    else if(liczba%5==0){
                printf("Liczba dzieli się przez 5\n");
    }
    else if(liczba%6==0){
                printf("Liczba dzieli się przez 6\n");
    }
    else{
        printf("Liczba %d nie dzieli się przez żadną liczbę z zakresu 2-6", liczba);
    }
}