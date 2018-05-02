#include <stdio.h>

int main(){
    /*
    int meter;
    int i=0;

    while(i<3){
        meter=i*1609;
        printf("%d 마일은 %d미터입니다.\n", i, meter);
        i++;
    }
    return 0;
     */
/*
    int i=4;
    long long fac=1;

    while(i>=1){
        fac*=i;
        i--;
    }
    printf("%lld", fac);
    return 0;
    */
/*
    int n;
    int i=1;

    printf("구구단 중에서 출력하고싶은 단을 입력하시오");
    scanf("%d", &n);
    while (i<=9){
        printf("%d*%d=%d \n", n, i , n*i);
        i++;
    }
    return 0;
    */
/*
    int n;
    printf("================\n");
    printf("n n의 제곱\n");
    printf("================\n");

    n=1;
    while(n<=4){
        printf("%5d %5d\n", n, n*n);
        n++;

    }
    return 0;
    */
/*
    int i,sum;

    i=1;
    sum=0;

    while(i<=1000){
        sum+=i;
        i++;
    }
    printf("합은 %d입니다", sum);
    return 0;
*/
/*
    int x=30, y=100, i=0;
    while(i<10){
        printf("%d,%d", x+60, y+60);
        x+=70;
        i++;
    }
    return 0;
    */
/*
    int x,y,r;
    printf("두개의 정수를 입력하시오(큰수,작은수)");
    scanf("%d %d", &x, &y);

    while (y!=0){
        r=x%y;
        x=y;
        y=r;
    }
    printf("최대공약수는 %d입니다. \n", x);
    return 0;
    */
/*
    int i=0;
    do {
        printf("1--새로만들기\n");
        printf("2--파일열기\n");
        printf("3--파일닫기\n");
        printf("하나를 선택하시오.\n");
        scanf("%d", &i);
    }while(i<1||i>3);
    printf("선택된 메뉴 = %d", i);
    return 0;
    */
/*
    int answer=41;
    int guess;
    int tries=0;
    do{
        printf("정답을 추측하여 보시오");
        scanf("%d", &guess);
        tries++;
        if(guess>answer) printf("high");
        if(guess<answer) printf("low");
    }while (guess!=answer);
    printf("축하합니다 시도횟수=%d", tries);
    return 0;
    */
/*
    int sum=0, j, k=10;
    for(j=2; k%j==0; j++){
        printf("%d is divisor of %d", j, k);
        sum+=j;

    }
    */
/*
    for(int i=4; i>0;){
        printf("T minus %d and counting \n", i--);
    }
*/
    /*
    for(int i=0; i<10; i++){
        printf("hello world");
    }
     */

    int x, y;
    for(y=0; y<5; y++){
        for(x=0; x<10; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}