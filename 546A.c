#include<stdio.h>
int main()

{
    int a,b,c,s=0,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++){
        s=s+(a*i);

    }
    if(s>b){
        printf("%d\n",s-b);
    }
    else{
        printf("0\n");
    }
    return 0;
}


