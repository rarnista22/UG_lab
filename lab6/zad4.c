#include <stdio.h>

int func(int n){
    if(n<2){
        return 1;
    }
    return func(n-1)+func(n-2);
}
int main(){
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("%d", func(n));
}