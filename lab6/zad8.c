#include <stdio.h>
#include <string.h>
int func(char wyraz[50], int i ,int j){
    if(i<j){
        if(wyraz[i]==wyraz[j]){
            func(wyraz, i+1, j-1);
        }
        else{
            printf("Wyraz nie jest palindromem");
        }
    }
    else{
        printf("Wyraz jest palindromem!");
    }
    return 0;
}
int main(){
    char wyraz[50];
    int j, i, dlugosc;
    printf("Podaj wyraz: ");
    dlugosc = strlen(wyraz)-1;
    scanf("%s", wyraz);
    printf("%d", dlugosc);
}