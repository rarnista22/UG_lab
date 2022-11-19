#include <stdio.h>
int rok,rok2,miesiac,miesiac2,dzien,dzien2;
int main(){
    printf("Podaj 1 rok: ");
    scanf("%d",&rok);
    printf("Podaj 2 rok: ");
    scanf("%d",&rok2);
    printf("Podaj 1 miesiac: ");
    scanf("%d",&miesiac);
    printf("Podaj 2 miesiac: ");
    scanf("%d",&miesiac2);
    printf("Podaj 1 dzien: ");
    scanf("%d",&dzien);
    printf("Podaj 2 dzien: ");
    scanf("%d",&dzien2);

int wynik_rok = rok-rok2;
int wynik_miesiac = miesiac-miesiac2;
int wynik_dzien = dzien-dzien2;

if(wynik_rok < 0){
wynik_rok = wynik_rok*(-1);
printf("Róznica lat %d\n",wynik_rok);}
else{
printf("Różnica lat %d\n",wynik_rok);
}


if(wynik_miesiac < 0){
wynik_miesiac= wynik_miesiac*-1;
printf("Różnica miesięcy %d\n",wynik_miesiac);
}
else{
printf("Różnica miesięcy %d\n",wynik_miesiac);
}



if(wynik_dzien < 0){
wynik_dzien= wynik_dzien*-1;
printf("Różnica dni %d\n",wynik_dzien);
}
else{
printf("Różnica dni %d\n",wynik_dzien);
}
}