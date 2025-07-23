#include<stdio.h>
 
int main(){
    int a,b,sum,sub,multi,div;
    float div;
    
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;

    printf ("sum is :%d\n",sum);
    printf ("sub is :%d\n",sub);
    printf("multi is :%d\n",multi);
    printf("div is :%f\n",div);
    return 0;
}