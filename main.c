#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("celciusze i farencjusze");
    printf("Test Repo");
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Celsius: \t Fahrenheit:\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%7.1d %19.0d \n",celsius,fahr);
        fahr = fahr + step;
    }
    printf("Done");
}
