#include <stdio.h>
void opcja1(int*);
void opcja2(int*);
void opcja3(int*);
int opcja4(int*);
int n = 5;
int main(void){
    int tab[100] = {1,2,3,4,5};
    int opcja;
    while(opcja !=0){
        printf("0-zakończ program\n1-wypisanie elementów tablicy\n2-wstawienie elementu do tablicy\n3-usunięcie elementu z tablicy\n4-suma cyfr elementów tablicy\n5-drzewko binarne\n");
        printf("Wybierz opcję: \n");
        scanf("%d", &opcja);
        switch(opcja){
            case 0:
            printf("Zakończo działanie programu!\n");
            break;
            case 1: opcja1(&tab);
            break;
            case 2: opcja2(&tab);
            break;
            case 3: opcja3(&tab);
            break;
            case 4:
                if(opcja4(&tab)==0){
                    printf("Brak elementów w tablicy!\n");
                }
                printf("%d\n", opcja4(&tab));
            break;
            default:
            printf("Wybrano nieprawidłową opcję! Wybierz ponownie.\n");
            continue;
        }
    }
}
void opcja1(int *tab){
    if(n==0){
        printf("Brak elementów w tablicy!");
    }
    else{
        for(int i=0;i<n;i++){
            printf("[%i] element tablicy to: %d\n", i+1,*(tab+i));
        };
    }
}
void opcja2(int *tab){
    if(n>100){
        printf("Brak miejsca na nowy element!\n");
    }
    else{
        int liczba;
        printf("Podaj nowy element: ");
        scanf("%d", &liczba);
        n+=1;
        *(tab+(n-1)) = liczba;
    }
}
void opcja3(int *tab){
    int indeks;
    printf("Podaj indeks elementu: ");
    scanf("%d", &indeks);
    if(indeks<0 || indeks>n-1){
        printf("Brak podanego indeksu w tablicy!\n");
    }
    else{
    for(int i=indeks; i<n; i++){
        *(tab+i) = *(tab+i+1);
        *(tab+n+1) = 0;
    }
    n--;
    }
}
int opcja4(int *tab){
    if(n==0){
        return 0;
    }
    else{
        int suma=0;
        for(int i=0; i<n; i++){
            suma+=*(tab+i);
        }
        return suma;
    }
}