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
        for(j=0;j<m;j++)
        {
            t[i][j]=0;
        }
    }
}
int main()
{
    int **t=alokuj(3,2);
    wczytaj(t,3,2);
    zera2(t,3,2);
    wypisz(t,3,2);
    return 0;
}
