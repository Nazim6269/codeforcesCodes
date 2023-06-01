#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter your input");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&a>c){printf(" The maximum number is : %d",a);}

    else if(b>c&b>a){ printf("The maximum number is : %d",b);}

    else {printf("The maximum number is : %d",c);}

    return 0;

}
