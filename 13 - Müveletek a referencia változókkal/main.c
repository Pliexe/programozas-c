#include <stdio.h>

int main(void)
{
    int a = 10, b = 2, *p1, *p2; // Referencia változók és int változóknak a cimét tartlmazák
    p1 = &a;    // p1 referencia változó hozá van rendelve az (a) változó cime
    p2 = &b;    // p2 referencia változó hozá van rendelve az (b) változó cime
    (*p1)++;    // (*p1)++; ugyan aszt jelenti mind a++; || a = 11
    (*p2)--;    // (*p2)--; ugyan aszt jelenti mind b--; || b = 1
    *p1 += a;   // a+=a; || a = 22
    *p2 -= *p1; // b-=a; || b = -21
    (*p2)--;    // || b=-22
    a += *p2;   // a+=b || a=0
    b = *p1;    // b=a; || b = 0

    printf("a = %d, b = %d", a, b); // a = 0, b = 0

    return 0;
}