#include <stdio.h>
int func(n){
    if(n>0){
        return n%10+func(n/10);
    }
    return 0;
}
int main(){
    int n;
    printf("Podaj liczbę: ");
    scanf("%d", &n);
    printf("%d", func(n));
}