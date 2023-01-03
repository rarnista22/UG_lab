#include<stdio.h>

int main(){
int tab[10];
int cyfra;
for(int i=0; i<10; i++){
    printf("Podaj liczbę: ");
    scanf("%i", tab+i);
}
for(int i=0; i<10; i++){
    printf("Element tablicy [%d] = %d \n", i,*(tab+i));
}
return 0;
}