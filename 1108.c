#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f,i,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld %lld %lld %lld",&c,&d,&e,&f);
        a=c;
        b=e;
        if(a==b){
            b++;
        }
        printf("%lld %lld\n",a,b);
    }
    return 0;
}
