

#include <stdio.h>

int main() {

    /*2018.03.16 오전 10시
      직성자 : 신성휘
      생년월일: 1999.4.22
      이메일 cjbc990422@naver.com
      전화번호 : 010-9248-7086
    */

    // this is test comment
    //printf("Hello, World!\n");

    int x=4, y=22;
    int sum;

    //x=4;
    //y=22;

    printf("첫번째 숫자 입력");
    //scanf("%d", &x);
    printf("두번째 숫자 입력");
    //scanf("%d", &y);

    sum = x+y;


    printf("Hello 신성휘\n");
    printf("from 신성휘\n");

    printf("3 X 1 = 3\n");
    printf("3 X 2 = 6\n");
    printf("3 X 3 = 9\n");

    printf("두 수 %d와 %d의 합 = %d\n", x, y, sum);

    printf("두수의 평균 = %d", (x+y)/2);
    return 0;

}
