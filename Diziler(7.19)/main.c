#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Kilavyeden girilen metnin icinde girilen harften  kaca tane oldununu bulan ve nerelerde oldunu yazan program!\n");

    int i,j,n,m,a,Tekar,Kontrol=1;

    printf("Kac karakterlik metin gireceksiniz: ");
    scanf("%d",&n);

    char Metin[n];



    fflush(stdin);

    printf("\nMetin giriniz : ");

    fgets(Metin,n+1,stdin);

    fflush(stdin);

    printf("Kac karakterlik hece gireceksiniz: ");
    scanf("%d",&m);

    int Hece_Yer[m];

    for(i=0;i<m;i++)
    {
        Hece_Yer[i]=NULL;
    }

    char Hece[m];

    fflush(stdin);

    printf("Hece girin: ");
    fgets(Hece,m+1,stdin);




    for(j=0;j<n;j++)
    {
        a=0;
        Tekar=0;

        for(i=0;i<m;i++)
        {

            if(Hece[i]==Metin[j])
            {

                Hece_Yer[a]=j+1;
                a++;
                j++;
                Tekar++;

            }
            else
            {
                j=j-Tekar;

                break;
            }


        }

        if(i==m)
        {
            break;
        }



    }


    for(i=0;i<m;i++)
    {

        if(Hece_Yer[i]==NULL)
        {
            printf("Yanlis deger girdiniz!!!");
            Kontrol=0;
        }

    }

    if(Kontrol==1)
    {
        printf("\n%s hecesinin karakter konumlari : ",Hece);
        for(i=0;i<m;i++)
        {
            printf("\n%d. harf %d. konumdadir.",i+1,Hece_Yer[i]);

        }

    }







    return 0;
}
