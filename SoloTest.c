#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[7][7]={{2,2,1,1,1,2,2},{2,2,1,1,1,2,2},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{2,2,1,1,1,2,2},{2,2,1,1,1,2,2}};

    while(1)
    {
        tahta(dizi);
        hareket(dizi);
        system("cls");
    }

    return 0;
}

void tahta(int dizi[][7])
{
    int i,j;
        int eksen=1;

        printf("\t    ");

        for(i=0;i<7;i++)
            printf("%d   ",eksen++);

        printf("\n\n");

        for(i=0;i<7;i++)
        {
            printf("\t");
            printf("%d | ",i+1);
            for(j=0;j<7;j++)
            {
                if(dizi[i][j]==2)
                {
                printf("    ");
                }
                else
                {
                printf("%d   ",dizi[i][j]);
                }

            }
            printf("\n\n");
        }

    }

void hareket(int dizi[][7])
{
    int y1,y2;
    int x1,x2;

        printf("X1 Degerini Giriniz: ");
        scanf("%d",&x1);
        printf("Y1 Degerini Giriniz: ");
        scanf("%d",&y1);
        printf("Tasi Atamak Istediginiz X2 Degerini Giriniz: ");
        scanf("%d",&x2);
        printf("Tasi Atamak Istediginiz Y2 Degerini Giriniz: ");
        scanf("%d",&y2);

        if(dizi[y1-1][x1-1]==1 && dizi[y1-1][x1]==1 && dizi[y2-1][x2-1]==0 && x2-x1==2)
            {
                dizi[y1-1][x1-1]=0;
                dizi[y1-1][x1]=0;
                dizi[y2-1][x2-1]=1;
            }
        else if(dizi[y1-1][x1-1]==1 && dizi[y1-1][x1-2]==1 && dizi[y2-1][x2-1]==0 && x1-x2==2)
            {
                dizi[y1-1][x1-1]=0;
                dizi[y1-1][x1-2]=0;
                dizi[y2-1][x2-1]=1;
            }
        else if(dizi[y1-1][x1-1]==1 && dizi[y1][x1-1]==1 && dizi[y2-1][x2-1]==0 && y2-y1==2)
            {
                dizi[y1-1][x1-1]=0;
                dizi[y1][x1-1]=0;
                dizi[y2-1][x2-1]=1;

            }
        else if(dizi[y1-1][x1-1]==1 && dizi[y1-2][x1-1]==1 && dizi[y2-1][x2-1]==0 && y1-y2==2)
            {
                dizi[y1-1][x1-1]=0;
                dizi[y1-2][x1-1]=0;
                dizi[y2-1][x2-1]=1;

            }
}
