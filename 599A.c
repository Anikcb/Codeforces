#include<stdio.h>
int main()
{
   long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a<b){
        if((a+b)<=c){
            if((c+a)<=b){
                printf("%d\n",a+a+b+c+a);
            }
            else{
                printf("%d\n",a+a+b+b);
            }
        }
        else{
            if((c+a)<=b){
                printf("%d\n",a+c+c+a);
            }
            else{
                printf("%d\n",a+c+b);
            }
        }
    }

        else{
            if((a+b)<=c){
                if((c+b)<=a){
                    printf("%d\n",b+a+b+c+a);
                }
                else{
                    printf("%d\n",b+a+b+a);
                }
            }
            else{
                if((c+b)<=a){
                    printf("%d\n",b+c+c+b);
                }
                else{
                    printf("%d\n",b+c+a);
                }
            }
        }
        return 0;


}
