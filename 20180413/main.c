#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*
    int num;

    printf("정수입력 ");
    scanf("%d", &num);

    if(num%2==0){
        printf("짝수");
    } else printf("홀수");

    return 0;
     */
/*
    int x,y;

    printf("첫번째수 ");
    scanf("%d", &x);
    printf("두번째수 ");
    scanf("%d", &y);

    printf("큰수=%d\n", (x>y)?x:y);
    printf("큰수=%d\n", (x<y)?x:y);
    */
/*
    int n;
    scanf("%d", &n);
    if(n>=100) printf("large");
    else printf("small");
    return 0;
    */
/*
    int i;
    printf("Enter");
    scanf("%d", &i);
    if(i<1||i>10)
        printf("is not range");
    else
        printf("Thankyou");
    return 0;
    */
/*
    int n;
    printf("정수입력 ");
    scanf("%d", &n);
    if(n>0&&n<=100) printf("범위 안");
    else printf("범위 초과");
    return 0;
    */
    /*
    int x,y;
    printf("2개정수입력 ");
    scanf("%d %d", &x,&y);
    if(x>y) printf("%d", x-y);
    else printf("%d", y-x);
    return 0;
*/
/*
    int x;
    printf("정수입력 ");
    scanf("%d", &x);
    if(x%2==0&&x%3==0) printf("2와 3의 배수");
*/
/*
    int year;
    printf("연도입력 ");
    scanf("%d", &year);
    if(year%4==0&&year%100!=0&&year%400==0)
        printf("%d년은 윤년", year);
    else printf("%d년은 윤년이아님", year);
    return 0;
    */
    /*
    printf("동전던지기 시작 ");
    srand(time(NULL));
    int coin =rand()%2;
    if(coin==0) printf("앞면");
    else printf("뒷면");
*/
/*
    char op;
    int x,y;
    printf("수식입력");
    scanf("%d %c %d", &x, &op, &y);
    if(op=='+') printf("%d",x+y);
    else if(op=='-') printf("%d",x-y);
    else if(op=='*') printf("%d",x*y);
    else if(op=='/') printf("%d",x/y);
    else printf("error");
*/
    /*
    int a,b,c,l;
    printf("3개정수입력");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b){
        if(a>=c) l=a;
        else l=c;
    }
    else{
        if (b>=c) l=b;
        else l=c;
    }
    printf("가장큰정수 %d", l);
    return 0;
*/
/*
    int month, days;

    printf("달 입력");
    scanf("%d", &month);

    switch(month){
        case 2:
            days=28;
            break;
        case 4: case 6: case 9: case 11:
            days=30;
            break;
        default:
            days=31;
            break;

    }
    printf("%d월의 일수는 %d", month,days);
    return 0;
*/

    int user, com;
    printf("하나선택 가위2 바위0 보");
    scanf("%d", &user);
    printf("사용자%d\n", user);
    printf("컴퓨터%d\n", com);
    if(user+1)%3==com) printf("컴퓨터승");
    else if(user==com) printf("비겼음");
    else printf("사용자승리");
    return 0;

}
