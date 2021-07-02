#include<stdio.h>
int main()
{
    int n,i,j,temp=0,c=0,k,s=0;
    int a[100020];
    int b[100200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        //printf("INPUT = %d\n",a[i]);
    }
    for(i=0;i<n;i++){
        if(a[0]<=a[i+1]){
            temp=a[0];

            a[0]=a[i+1];
        a[i+1]=temp;


        }
    }
    printf("%d ",a[0]);
       j=0;
       s=a[0];
    for(i=s;i>=1;i--){
           // printf("I1 = %d\n",i);

        if(a[0]%i==0){
               // printf("I2 = %d\n",i);
            b[j]=i;
            // printf("J = %d A[J] = %d\n",j,b[j]);
             j++;

        }
    }
    for(i=0;i<j;i++){
        for(k=0;k<n;k++){
            if(b[i]==a[k]){
                a[k]=0;
                break;
            }
        }

    }

    for(i=0;i<n;i++){
        if(a[0]<a[i+1]){
            c=a[0];
            a[0]=a[i+1];
            a[i+1]=c;
        }
        //printf("%d\n",a[i]);
    }
    printf("%d\n",a[0]);
}
