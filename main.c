#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "BigInteger.h"

int main()
{
    struct BigInteger a;
    struct BigInteger b;
    char str1[1000];
    char str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    a=initialize(str1);
    b=initialize(str2);
    
    printf("\n");
    printf("\n");

    struct BigInteger c=add(a,b);
    display(c);
    printf("\n");
    struct BigInteger d=sub(a,b);
    display(d);
    printf("\n");
    struct BigInteger e=mul(a,b);
    display(e);
    printf("\n");
    struct BigInteger f=div1(a,b);
    display(f);
    printf("\n");
    struct BigInteger g=mod(a,b);
    display(g);
    printf("\n");
    return 0;
}