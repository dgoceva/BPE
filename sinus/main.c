#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define END 10000
#define PI 3.14159265359

int main()
{
    int xdeg;
    float xrad;
    double mysin,n;
    unsigned cnt=3;

    printf("x=");
    scanf("%d",&xdeg);
    xrad = xdeg*PI/180;

    mysin = n = xrad;
    for(unsigned i=1;i<END;++i,cnt+=2){
        n *= (-1)*xrad*xrad/(cnt*(cnt-1));
        mysin += n;
    }

    printf("sin(%d)=%g\n",xdeg,mysin);
    printf("From math: sin(%d)=%g\n",xdeg,sin(xrad));

    return 0;
}
