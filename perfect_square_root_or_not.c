
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<(n/2)+1;i++)
    {
        if(n==(i*i))
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}
