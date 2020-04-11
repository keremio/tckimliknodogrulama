#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int TCKN,x;
    int n = 0;
    int k;
    scanf("%lld" , &TCKN);
    x = TCKN;
    do{
        x = x / 10;
        n++;
    }while(x > 0);
    int TC[n];
    for (k = 1; k < n+1; k++)
    {
        long long int temp = (long long int)(TCKN/pow(10,n-k));
        TC[k-1] = temp%10;
    }
    int odd = TC[0] + TC[2] + TC[4] + TC[6] + TC[8];
    int even = TC[1] + TC[3] + TC[5] + TC[7];

    if ((7*odd - even)%10 == TC[9] && (odd + even + TC[9])%10 == TC[10])
    {
        printf("girdiginiz TC Kimlik Numarasi dogru!");
    }
    else {
        printf("girdiginiz TC Kimlik Numarasi yanlis.")
    }
}
