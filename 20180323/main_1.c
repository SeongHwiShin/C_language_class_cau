#include <stdio.h>

//2018.03.23 오전 9시 신성휘

int main() {

    int x, y, sum;

    printf("x의 값을 입력하시오\n");
    scanf("%d", &x);
    printf("y의 값을 입력하시오\n");
    scanf("%d", &y);

    //x=4;
    //y=22;
    sum=x+y;

    printf("Hello, World!\n");
    printf("%d 와 %d의 합은 %d입니다.",x,y,sum);
    return 0;
}