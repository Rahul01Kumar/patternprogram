#include <stdio.h>
void main()
{
    int i,j,space,input;
    printf("Enter the no of lines = ");
    scanf("%d",&input);
    for(i=1;i<=input;i++)
    {
        for(space=input;space>=i;space--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("$");
        }
        printf("\n");
    }
}
