#include <stdio.h>
#include "add.h"
#include "mul.h"
#include "div.h"
#include "cut.h"
int main(int argc,char*agrc[])
{
    int a =20;
    int b =5;

    int add_temp = add(a,b);
    int mul_temp = mul(a,b);
    int cut_temp = cut(a,b);
    int div_temp = div(a,b);
    printf("hello world\n");
    printf("a+b =%d\n",add_temp);
    printf("a-b =%d\n",cut_temp);
    printf("a*b =%d\n",mul_temp);
    printf("a/b =%d\n",div_temp);
}


