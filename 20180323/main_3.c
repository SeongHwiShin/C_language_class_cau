#include <stdio.h>

int main(){

    int a, b;

    printf("첫번째숫자 입력");
    scanf("%d", &a);
    printf("두번째숫자 입력");
    scanf("%d", &b);

    printf("두수의 합%d\n", a+b);
    printf("두수의 차%d\n", a-b);
    printf("두수의 곱%d\n", a*b);
    printf("두수의 몫%d\n", a/b);


    return 0;
}