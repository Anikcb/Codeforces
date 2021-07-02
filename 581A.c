#include<stdio.h>
int main()
{
    int a,b,s=0,x=0;
    scanf("%d %d",&a,&b);
    if(a>b){
        s=a-b;
        x=s/2;
        printf("%d %d\n",b,x);
    }
    else{
        s=b-a;
        x=s/2;
        printf("%d %d\n",a,x);
    }
    return 0;
}

