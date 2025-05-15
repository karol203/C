#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

int(* alokuj2(unsigned int n,unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}
int alokujtrojkat(int n)
{
    int **t=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        t[i]=malloc((i+1)*sizeof(int));
    }
    return t;
}


void wypisz(int **t, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void wypisz2(unsigned int n,unsigned int m, int t[][m]){
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void wczytaj(int **t, unsigned int n,unsigned int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }

}


void wczytaj2(unsigned int n,unsigned int m, int t[][m])
 {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }

}
void wczytajtrojkat(int **t,unsigned int n)
{
    int liczba=1;
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            t[i][j]=liczba;
            liczba++;
        }
    }
}
void wypisztrojkat(int **t,unsigned int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}
void zwolnij(unsigned int n, unsigned int m, int **t)
{
    int i;
    for(i=0;i<n;i++)
    {
        free(t[i]);
    }
}
void zwolnij2(unsigned int n, int t[][n])
{
    free(t);
}
/*
int** trojkat(unsigned int n){
    int**t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc((i+1)sizeof(int));
    }
    return t;
}
*/
void zera2(int **t, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t[i][j]=0;
        }
    }
}
int main()
{
    ///Zadanie 6.2.1

    //printf("%p",alokuj(5,5));

    ///Zadanie 6.2.2
    //printf("%p",alokuj2(5,5));

    /// Zadanie 6.2.18
    int **t=alokuj(3,3);
    //wczytaj(t,3,3);
    //wypisz(t,3,3);
    int t2[3][3];
    //wczytaj2(3,3,t2);
    //wypisz2(3,3,t2);
    int t3[4][4]={{20,20,20,20},{10,10,10,10},{10,10,10,10},{10,10,10,10}};
    //wypisz2(4,4,t3);

    ///Zadanie 6.2.3
    //zwolnij(4,4,t3);

    ///Zadanie 6.2.4
    //zwolnij2(5,t3);

    ///Zadanie 6.2.7
    //int **tt=alokujtrojkat(4);
    //wczytajtrojkat(tt,4);
    //wypisztrojkat(tt,4);

    ///Zadanie 6.2.9
    int **tab=alokuj(3,2);
    //wczytaj(tab,3,2);
    //zera2(tab,3,2);
    //wypisz(tab,3,2);
    return 0;
}
