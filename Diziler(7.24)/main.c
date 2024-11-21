#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Kilavyden girilen bir metni icindeki sesli harfleri bulan program !\n");

    int i,j,n,a=0,b=0,Kontrol;


    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n];

    char Sesli_Harfler[10]={'A','a','E','e','O','o','U','u','I','i'};

    char Sesiz[n+5],Sesli[n];

    for(i=0;i<n;i++)
    {
        Sesiz[i]=NULL;
        Sesli[i]=NULL;
    }




    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    fflush(stdin);


    for(j=0;j<n;j++)
    {
        if((Metin[j]>=65 && Metin[j]<=90)||(Metin[j]>=97 && Metin[j]<=122))
        {
            Kontrol=0;

            for(i=0;i<10;i++)
            {
                if(Metin[j]==Sesli_Harfler[i])
                {
                    Sesli[a]=Metin[j];
                    a++;
                    Kontrol=1;
                }

            }


            if(Kontrol==0)
            {
                Sesiz[b]=Metin[j];
                b++;
            }


        }


    }





    printf("Sesli harfler Kelimesi : \n");
    for(i=0;i<n;i++)
    {
        if(Sesli[i]!=NULL)
        {
            printf("%c",Sesli[i]);
        }


    }
    printf("\nSesiz harfler Kelimesi : \n");
    for(i=0;i<n;i++)
    {
        if(Sesiz[i]!=NULL)
        {
          printf("%c",Sesiz[i]);
        }

    }


    return 0;
}
