#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int zadanie_1_4_1()
{
    int n,m,suma;
    printf("Podaj liczby n i m: \n");
    scanf("%d %d", &n, &m);
    suma = 0;
    for(int i = n; i < m; i=i+n)
    {
        suma= sumaPlusN(suma, n);
    }

}
int zadanie_1_4_2()
{
    int n,m,suma;
    printf("Podaj liczby n i m: \n");
    scanf("%d %d", &n, &m);
    suma = 0;
    for(int i;i < m; i++)
    {
        suma=sumaPlusN(suma, n);
    }

}
int sumaPlusN(int suma, int n)
{
    printf("%d \n", suma = suma + n);
    return suma;
}
int zadanie_1_4_3()
{
    unsigned int n,m,k;
    printf("Podaj n, m i k: \n");
    scanf("%d %d %d", &n, &m, &k);
    for(int i = m + n; i < k; i=i+n)
    {
        printf("%d \n", i);
    }
}
int zadanie_1_4_4()
{
    unsigned int n, suma;
    printf("Podaj n: \n");
    scanf("%d", &n);
    suma = 1;
    for(int i = 2; i<=n; i++)
    {
        suma = suma * i;
    }
    printf("%d", suma);
}
int zadanie_1_4_5()
{
    unsigned int n, suma;
    printf("Podaj n: \n");
    scanf("%d", &n);
    suma = 0;
    for(int i = 0; i <= n; i++)
    {
        suma = suma + i * i;
    }
    printf("%d", suma);
}
int zadanie_1_4_6()
{
   unsigned int n,suma;
   printf("Podaj n: \n");
   scanf("%d", &n);
   suma = 1;
   if(n%2 == 0)
   {
       for(int i = 2;i<=n;i = i + 2)
       {
           suma=suma * i;
       }
       printf("%d", suma);
   }
   if(n%2 != 0)
   {
       for(int i = 2;i<=n-1;i=i+2)
       {
           suma=suma * i;
       }
       printf("%d", suma);
   }
}
zadanie_1_4_7()
{
    int n,m,suma;
    printf("Podaj liczbe n i m taka ze n<m \n");
    scanf("%d",&n);
    scanf("%d",&m);
    suma = 1;
    if(n<m)
    {
        for(int i = n;i<=m; i++)
        {
            suma = suma * i;
        }
        printf("%d", suma);
    }
    else
    {
        printf("ERROR! n musi byc mniejsze od m!");
    }
}
zadanie_1_4_8()
{
    int n,suma;
    printf("Podaj n: \n");
    scanf("%d", &n);
    suma = 0;
    suma = fibonaci(n);
    printf("%d", suma);
}
int fibonaci(int n)
{
        for(int i = n; i<=n; i++)
    {
        if(i==0)
        {
            return 0;
        }
        if(i==1)
        {
            return 1;
        }
        if(i>1)
        {
            return fibonaci(i-1) + fibonaci(i-2);
        }
    }
}
zadanie_1_4_9()
{
    int n,m;
    printf("Podaj n i m: \n");
    scanf("%d %d", &n, &m);

}
main()
{
    zadanie_1_4_8();

}
