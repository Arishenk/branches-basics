#include <stdio.h>
#include <stdlib.h>
int check(int srok, long int summa) {   
    int k = 0;
    if ((srok < 0) || (srok > 365) || (summa < 10000))  k = 0;
    else k = 1;							  
    return k;
}
int main() {
    int srok = 0, l = 0, summa = 0;
    printf("enter the term of the deposit\n");
    scanf("%d", &srok);
    printf("enter the deposit bag\n");
    scanf("%d", &summa);
    return 0;
}
