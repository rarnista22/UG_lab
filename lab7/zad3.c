#include<stdio.h>

void func(int * zmienna1, int * zmienna2){
    int x = *zmienna1;
    *zmienna1 = *zmienna2;
    *zmienna2 = x;

}
int main(){
    int zmienna1 = 5;
    int zmienna2 = 10;

    printf("Zmienna1 przed zmiana: %i\n", zmienna1);
    printf("Zmienna2 przed zmiana: %i\n", zmienna2);

    func(&zmienna1, &zmienna2);

    printf("Zmienna1 po zamianie: %i\n", zmienna1);
    printf("Zmienna2 po zamianie: %i\n", zmienna2);
return 0;
}
