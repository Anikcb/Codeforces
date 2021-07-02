#include<stdio.h>
int main()
{
    int a[300000];
    a[0]=0;
    int n,b,i,j=0;
    scanf("%d %d",&n,&b);
    for(i=1;i<=(n*b*2);i=i+2){
        scanf("%d %d",&a[i],&a[i+1]);

        if(a[i]==1||a[i+1]==1){
            j++;
        }
    }

    printf("%d\n",j);
    return 0;


}
