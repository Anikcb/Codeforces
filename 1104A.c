#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,s=0,d=0;
    scanf("%d",&a);
    if(a<10){
            printf("1\n");
        printf("%d\n",a);
    }
    else{
        for(i=9;i>=1;i--){
             if(a%i==0){
                    s=a/i;
                printf("%d\n",a/i);
                c=1;
                d=i;
                break;
             }
        }


    }
    if(c==1){
        for(j=1;j<=s;j++){
            printf("%d ",d);
        }
    }
    return 0;
}
