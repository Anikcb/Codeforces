#include<stdio.h>
int main()
{
    int n,x=0,y=0,i,j,k;
    int z[100000];
    char a[10000];
    scanf("%d",&n);
    scanf("%s",a);
    j=0;
    for(i=0;i<n;i++){
           y=0;
        if(a[i]=='B'){
                x++;
            while(a[i]=='B'){
                y++;
                i++;

            }
        z[j]=y;
        j++;
        }
    }
    printf("%d\n",x);

   for(j=0;j<x;j++){
        printf("%d ",z[j]);

    }
    return 0;
}


