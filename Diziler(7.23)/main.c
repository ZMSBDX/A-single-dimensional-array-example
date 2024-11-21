#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyden girilen bir metni icindeki sesli harfleri bulan program !\n");

    int i,j,n,Sesli_Harf=0,a=0;


    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n];

    char Sesli_Harfler[10]={'A','a','E','e','O','o','U','u','I','i'};

    int Sesli_Yer[n];

    for(i=0;i<n;i++)
    {
        Sesli_Yer[i]=NULL;
    }



    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    fflush(stdin);


    for(j=0;j<n;j++)
    {

        for(i=0;i<10;i++)
        {
            if(Metin[j]==Sesli_Harfler[i])
            {
                Sesli_Harf++;
                Sesli_Yer[a]=j+1;
                a++;

            }

        }

    }



    printf("metinde %d kadar sesli harf vardir\nKonumlari: ",Sesli_Harf);


    for(i=0;i<n;i++)
    {
        if(Sesli_Yer[i]!=NULL)
        {
            printf("\n%d",Sesli_Yer[i]);
        }

    }


    return 0;
}
