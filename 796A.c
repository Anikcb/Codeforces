include<stdio.h>
int main()
{
    int a[10000];
    int b,c,i,s=100000,x=100000,d;
    scanf("%d %d %d",&b,&c,&d);
    for(i=0;i<b;i++){
            scanf("%d",&a[i]);
        if(a[i]==0){

           continue;
        }
        if(a[i]==a[c-1]){

            continue;
        }

        else{
                if(i<c){
            if(a[i]<=d){
                s=((c-(i+1))*10);

            }
                }
                else{
                    if(a[i]<=d){
                        x=((i+1)-c)*10;

                        break;
                    }
                }
        }
    }
    if(s<x&&s!=0){
        printf("%d\n",s);
    }
    else{
        printf("%d\n",x);
    }
    return 0;
}
