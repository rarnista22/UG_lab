#include <stdio.h>
int func(int dzien, int miesiac, int rok){
    if(dzien>0&&dzien<32){
        if(miesiac>0&&miesiac<13){
            if(rok>0){
                printf("Data %d-%d-%d jest poprawna \n", dzien,miesiac,rok);
            }
            else{
                printf("Niepoprawny rok!");
                }
        }
        else{
            printf("Niepoprawny miesiąc!\n");
        }
    }
    else{
        printf("Niepoprawny dzień!\n");
        }
    
}
int main(void){
    int dzien,miesiac,rok;
    printf("Podaj dzien: ");
    scanf("%d", &dzien);
    printf("Podaj miesiac: ");
    scanf("%d", &miesiac);
    printf("Podaj rok: ");
    scanf("%d", &rok);
    func(dzien,miesiac,rok);
    
}