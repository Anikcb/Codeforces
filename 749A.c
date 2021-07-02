#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);

    if(a%2==0){
             printf("%d\n",a/2);
        for(i=1;i<=a/2;i++){
            printf("2 ");
        }
    }
    else{
         printf("%d\n",a/2);
        for(j=1;j<=a/2;j++){

            if(j<a/2){
            printf("2 ");
            }
            else{
                printf("3 ");
            }
        }
    }
    return 0;
}
