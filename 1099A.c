#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,s=0,i;

    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    scanf("%d %d",&e,&f);
    s=a;
    for(i=b;i>=1;i--){
        s=s+i;
        if(i==d){
            s=s-c;
            if(s<=0){
                s=0;
            }
        }
        if(i==f){
            s=s-e;
            if(s<=0){
                s=0;
            }
        }
    }
    printf("%d\n",s);
    return 0;
}
