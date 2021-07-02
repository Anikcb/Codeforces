#include<stdio.h>
int main()
{
    int c[10000];
    int a,b,i,s=0,z=1000000;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        scanf("%d",&c[i]);
        s=b/c[i];
        if(b%c[i]==0&&s<z){
           z=s;


        }

    }
    printf("%d\n",z);
    return 0;
}
