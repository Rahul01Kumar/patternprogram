

/* pattern printing right angled triangle

*
**
***
****
*****
******
*/












#include <stdio.h>
void main()
{
  int i,j,input;
  printf("ENter the no of lines = ");
  scanf("%d",&input);
  for(i=1;i<=input;i++){
    for(j=1;j<=i;j++){
    printf("*");}
  }printf("\n");
}
