
#include<stdio.h>
int main()
{
    int i,n,s,j;
    char a[10000];
    scanf("%d",&s);
    for(j=0;j<s;j++){
    scanf("%d",&n);
    scanf("%s",a);

    if(n==2){
        if(a[0]>=a[1]){
            printf("NO\n");
        }
        else{
                printf("YES\n");
            printf("2\n");
        printf("%c %c\n",a[0],a[1]);
        }
    }
    if(n>2){
        printf("YES\n");
        printf("2\n");
        printf("%c ",a[0]);
        for(i=1;i<n;i++){
            printf("%c",a[i]);
        }
        printf("\n");
    }
    }
    return 0;
}

