
#include<stdio.h>
int main()
{
    int x,a,b,c,A=2;
    scanf("%d",&x);
    if(x==1){
        printf("-1\n");
    }
  else  if(x==3){
        printf("3 3\n");
    }

   else if(x%2==0){
   printf("%d %d\n",x,A);
    }


    else{
        a=(x/2);
        if(a%2==0){
                a=a+2;
        b=a/2;
        if((a*b)>x){
        printf("%d %d\n",a,b);
        }
        else{
            printf("-1\n");
        }
        }
        else{
                c=(a+1)/2;
            printf("%d %d\n",a+1,c);
        }
    }
    return 0;
}
