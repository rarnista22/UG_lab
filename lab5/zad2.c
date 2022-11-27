#include <stdio.h>

int znak(char a, char b){
    
    if(a==b){
        printf("1");
    }
    else{
        printf("0");
    }
}
int main(void){
    char a,b;
    printf("Podaj znak: ");
    scanf("%c", &a);
    printf("Podaj drugi znak: \n");
    scanf("%c", &b);
    znak(a,b);
    
}