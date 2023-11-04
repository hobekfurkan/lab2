#include <stdio.h>
#include <stdlib.h>

int maksimum(int a,int b,int c);

int main()
{
    int sayi1;
    int sayi2;
    int sayi3;

    printf("En buyugunu bulmak istediginiz 3 tamsayi degeri giriniz...\n");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
    if(sayi1>sayi2 && sayi1>sayi3 )
    printf("Girilen 3 tamsayi degerlerinden en buyugu: %d", sayi1);
    else if(sayi2>sayi1 && sayi2>sayi3)
    printf("Girilen 3 tamsayi degerlerinden en buyugu: %d", sayi2);
    else
    printf("Girilen 3 tamsayi degerlerinden en buyugu:  %d", sayi3);


    return 0;
}

