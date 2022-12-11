#include <stdio.h>

int func(int n){
    if(n!=0){
        func(n-1);
        printf("%d, ", n);
    };
    return;
}
int main(){
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    func(n);
}