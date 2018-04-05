#include "stdio.h"

int main(){

    double first, second;
    double  temp, ans;

    printf("Enter two integers> ");
    scanf("%lf %lf", &first, &second);
    temp= second/first;
    ans=first/temp;

    printf("The result is %.3f\n", ans);
    return 0;
}
