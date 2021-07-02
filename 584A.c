#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a==1&&b==10){
        printf("-1\n");
    }
    else if(a==1&&b<10){
        for(i=2;i<10;i++){
            if(i%b==0){
                printf("%d\n",i);
                return 0;
            }
        }
    }
    else{
        printf("%d",b);
        if(b==10){
             for(i=1;i<a-1;i++){
            printf("0");
        }
        }
        else{
        for(i=1;i<a;i++){
            printf("0");
        }
        }
    }
    return 0;

}
