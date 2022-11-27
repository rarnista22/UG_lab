#include <stdio.h>
int func(rok, miesiac){
    int liczba_dni;
    switch(miesiac){
        case 1:
        liczba_dni = 31;
        printf("Liczba dni w styczniu: %d \n", liczba_dni);
        break;
        case 2:
        if(rok%4==0 && rok%100!=0 || rok%400==0){
            liczba_dni = 29;
            printf("Liczba dni w lutym: %d \n", liczba_dni);
        }
        else{
            liczba_dni = 28;
            printf("Liczba dni w lutym: %d \n", liczba_dni);
        }
        break;
        case 3:
        liczba_dni = 31;
        printf("Liczba dni w marcu: %d \n", liczba_dni);
        break;
        case 4:
        liczba_dni = 30;
        printf("Liczba dni w kwietniu: %d \n", liczba_dni);
        break;
        case 5:
        liczba_dni = 31;
        printf("Liczba dni w maju: %d \n", liczba_dni);
        break;
        case 6:
        liczba_dni = 30;
        printf("Liczba dni w czerwcu %d \n", liczba_dni);
        break;
        case 7:
        liczba_dni = 31;
        printf("Liczba dni w lipcu: %d \n", liczba_dni);
        break;
        case 8:
        liczba_dni = 31;
        printf("Liczba dni w sierpniu: %d \n", liczba_dni);
        break;
        case 9:
        liczba_dni = 30;
        printf("Liczba dni we wrześniu: %d \n", liczba_dni);
        break;
        case 10:
        liczba_dni = 31;
        printf("Liczba dni w październiku %d \n", liczba_dni);
        break;
        case 11:
        liczba_dni = 30;
        printf("Liczba dni w listopadzie: %d \n", liczba_dni);
        break;
        case 12:
        liczba_dni = 30;
        printf("Liczba dni w grudniu: %d \n", liczba_dni);
        break;
    }
}
int main(void){
    int rok,miesiac;
    printf("Podaj miesiac: ");
    scanf("%d", &miesiac);
    printf("Podaj rok: ");
    scanf("%d", &rok);
    func(rok,miesiac);
    
}