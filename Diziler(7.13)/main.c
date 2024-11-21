#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("N tane girilen noktanin Kartezyan kordinat sistemine gore nerede oldugunu bulan program!\n");

   int i,n,Bolge_1,Bolge_2,Bolge_3,Bolge_4,Merkez;

   printf("\nKac adet nokta gireceksiniz : ");
   scanf("%d",&n);

    int Noktalar_X[n],Noktalar_Y[n];

    for(i=0;i<n;i++)
    {
    printf("%d. noktanin kordinatlarini giriniz.",i+1);
    printf("\nX :");
    scanf("%d",&Noktalar_X[i]);
    printf("\nY :");
    scanf("%d",&Noktalar_Y[i]);
    }

    for(i=0;i<n;i++)
    {
        if(Noktalar_X[i]==0&&Noktalar_Y[i]==0)
        {
            Merkez++;
            printf("\n%d nokta X:%d Y:%d merkezdedir.",i+1,Noktalar_X[i],Noktalar_Y[i]);
        }
        else
        {
            if(Noktalar_X[i]>0)
            {
                if(Noktalar_Y[i]>0)
                {
                    Bolge_1++;
                     printf("\n%d nokta X:%d Y:%d 1.Bolgededir.",i+1,Noktalar_X[i],Noktalar_Y[i]);
                }
                else
                {
                    Bolge_4++;
                     printf("\n%d nokta X:%d Y:%d 4.Bolgededir.",i+1,Noktalar_X[i],Noktalar_Y[i]);
                }
            }
            else
            {
                if(Noktalar_Y[i]>0)
                {
                    Bolge_2++;
                     printf("\n%d nokta X:%d Y:%d 2.Bolgededir.",i+1,Noktalar_X[i],Noktalar_Y[i]);
                }
                else
                {
                    Bolge_3++;
                     printf("\n%d nokta X:%d Y:%d 3.Bolgededir.",i+1,Noktalar_X[i],Noktalar_Y[i]);
                }
            }

        }


    }









    return 0;
}
