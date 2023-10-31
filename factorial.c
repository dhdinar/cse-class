#include <stdio.h>
int fact(int a)
{
    if(a==1)
    return 1;
    else{
        a=a*fact(a-1);
        return a;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=fact(n);
    printf("%d",p);
}