#include <stdio.h>
int main(void){
    char tab[];
    printf("Podaj dowolne słowo: ");
    scanf("%s", tab);
    int size = sizeof(tab) / sizeof(char*);
    printf("Rozmiar: %d \n", size);

}