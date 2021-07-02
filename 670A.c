#include<stdio.h>
int main()
{

    int a,i,s=0,b=0,c=0;
    scanf("%d",&a);
    if(a>6){
            s=a/7;
        i=a%7;
        if(i==1){
            b=0;
            c=1;

        }
         if(i>1&&i<6){
            b=0;
            c=2;
        }
        if(i==6) {
            b=1;
            c=2;

        }
        b=b+(s*2);
    c=c+(s*2);
        printf("%d %d\n",b,c);
    }
    else{
        if(a==1){
            b=0;
            c=1;

        }
        if(a>1&&a<6){
            b=0;
            c=2;
        }
        if(a==6){
            b=1;
            c=2;

        }
        printf("%d %d\n",b,c);
    }
    return 0;
}
