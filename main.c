#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int rastgeleSayi;
    srand(time(NULL));
    int loto[49] = {0};

    printf("Sayilar üretilmeye baslaniyor...\n");

    for(int i=0;i<6;i++) {
        rastgeleSayi = rand() %50;
        while(loto[rastgeleSayi-1] == 1) {
            rastgeleSayi = rand() %50;
        }
        loto[rastgeleSayi-1] = 1;
        printf("%d\n",rastgeleSayi);
    }
    for(int i=0;i<49;i++){
        printf("%d",loto[i]);
    }

    return 0;
}
