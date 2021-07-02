include<stdio.h>
int main()
{
    char a[10000];
    char b[10000];
    scanf("%s %[^\n]",a,&b);

    if(a[0]==b[0]||a[0]==b[3]||a[0]==b[6]||a[0]==b[9]||a[0]==b[12]||a[1]==b[1]||a[1]==b[4]||a[1]==b[7]||a[1]==b[10]||a[1]==b[13]){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
