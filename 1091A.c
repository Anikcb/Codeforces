#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c){

         printf("%d\n",(c-2)+(c-1)+(c));
    }
  else  if((c<b&&c<b&&b<a)||(c<b&&c<a&&b>a)){

         printf("%d\n",(c-2)+(c-1)+(c));
    }
   else  if((b<a&&b<c&&c<a)||(b<a&&b<c&&c>a)){

         printf("%d\n",(b-1)+(b)+(b+1));
    }
    else  if((a<c&&a<b&&b<c)||(a<c&&a<b&&b>c&&c!=(a+1))){

         printf("%d\n",(a)+(a+1)+(a+2));
    }


   else if((a<c&&a<b&&b<c)||(a<c&&a<b&&b>c&&c==(a+1))){

         printf("%d\n",(c-2)+(c-1)+(c));
    }




  else  if(a==b&&c>a){

         printf("%d\n",(b-1)+(b)+(b+1));
    }
   else if(b==c&&a>b){

         printf("%d\n",(c-2)+(c-1)+(c));
    }
  else  if(a==c&&b>a){

        printf("%d\n",(c-2)+(c-1)+(c));
    }


  else   if(a==b&&c<a){

        printf("%d\n",(c-2)+(c-1)+(c));
    }
   else if(b==c&&a<b&&a!=(b-1)){

        printf("%d\n",(a)+(a+1)+(a+2));
    }

    else if(b==c&&a<b&&a==(b-1)){

         printf("%d\n",(a-1)+(a)+(a+1));
    }


    else{

         printf("%d\n",(b-1)+(b)+(b+1));
    }

   return 0;
}
