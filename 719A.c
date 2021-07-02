#include<stdio.h>
int main()
{
    int a[100000];
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d",&a[i]);

    }
    if(n==1){


   if(a[0]==0){

            printf("UP\n");
        }

        else if(a[0]==15){
            printf("DOWN\n");
        }
        else{

        printf("-1\n");
       }
    }
    else{

      if(a[n-1]>a[n-2]&&a[n-1]!=15){

        printf("UP\n");
       }
     else if(a[n-1]>a[n-2]&&a[n-1]==15){

        printf("DOWN\n");
       }
      else if(a[n-1]<a[n-2]&&a[n-1]==0){
        printf("UP");
       }

      else {

        printf("DOWN\n");
       }

    }


    return 0;
}
