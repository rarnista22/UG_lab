#include <stdio.h>
int func(int rok){
    if(rok%4==0 && rok%100!=0 || rok%400==0){
        printf("Rok %d jest przestepny!\n", rok);
    }
    else{
        printf("Rok %d nie jest przestepny!\n", rok);
    }
}
int main(void){
    int rok;
    printf("Podaj rok: ");
    scanf("%d", &rok);
    func(rok);   
}