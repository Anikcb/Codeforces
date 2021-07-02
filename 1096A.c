#include<stdio.h>
int main()
{
    int a,b,n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        s=a*2;
        if(s<=b){
            printf("%d %d\n",a,s);
        }
    }
    return 0;
}

