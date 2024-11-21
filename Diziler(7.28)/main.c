#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Buyuk Harfler ile girilern bir kelimenin sesizlerin ayni kalip seslilerin ascii karakter sayilari ile sifreleyen program!\n");

    int i,n,j,Kontrol;




    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Sesli[5]={'A','E','O','U','I'},Kelime[n];


    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Kelime,n+1,stdin);

    printf("\nMetnin Orjinal Hali : %s",Kelime);

    printf("\nSifreli Hali : ");

    for(j=0;j<n;j++)
    {
        Kontrol=1;

        for(i=0;i<5;i++)
        {
            if(Kelime[j]==Sesli[i])
            {
                printf("%d",Kelime[j]);
                    Kontrol=0;
            }
        }

        if(Kontrol==1)
        {
            printf("%c",Kelime[j]);
        }


    }

    return 0;
}
