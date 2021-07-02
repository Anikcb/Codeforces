#include<stdio.h>
int main()
{
    long long int a,b,c,n,i,j,s=0,k,x=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
scanf("%lld %lld %lld",&a,&b,&c);
if((a-1)>=c){

        printf("%lld\n",c);


}




else{
    if(c>b){
        printf("%lld\n",c);
    }
    else{
            if(c<=1000&&b>10000000){
                    x=c+b;
                for(k=0;k<20000;k++){
                    x=x+k;
                    if(x%c==0){
                        printf("%lld\n",x);
                        break;
                    }
                }
            }
            else{
        s=c;

    for(j=1;j<90000000000;j++){

            c=c*j;
            if(c>b){

        printf("%lld\n",c);
           break;
            }
            else{
                c=s;
            }
    }
    }

}
}


    }
    return 0;
}
