#include<stdio.h>
int main()
{

  long long int a,s=0;
    scanf("%lld",&a);
    if(a%2==0){
    if(a>=1&&a<=5){
        printf("0\n");
    }
   else if(a>=6&&a<=7){
        printf("1\n");
    }
    else{

    s=a/2;
    if(s%2==0){
         s=s/2;
    s=s-1;
    printf("%lld\n",s);
    }
    else{
         s=s/2;
    printf("%lld\n",s);
    }
    }
    }
    else{
        printf("0\n");
    }




    return 0;
}
