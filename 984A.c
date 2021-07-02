#include<stdio.h>
int main()
{
    int a[100000];
    int i,n,b,k,j,s=0;
      scanf("%d",&n);
   for(k=0;k<n;k++){
    scanf("%d",&a[k]);
   }

   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){

        if(a[i]>a[j]){

            s=a[i];

            a[i]=a[j];

            a[j]=s;

        }
    }

   }

if(n%2==0){
    printf("%d",a[(n/2)-1]);
}
else{

        b=(n/2);

        printf("%d",a[b]);
}


    return 0;

}
