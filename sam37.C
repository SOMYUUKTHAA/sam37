#include<stdio.h>
int swap(int a,int b);
void main()
{
 int a,b;
 printf("\nENTER TWO VALUES\n");
 scanf("%d%d",&a,&b);
 printf("BEFORE SWAPPING");
 printf("\nTHE VALUES ARE:\t%d\t%d",a,b);
 printf("\nCALLING SWAP");
 swap(a,b);
 printf("\nAFTER SWAPPING");
 printf("\nTHE VALUES ARE:\t%d\t%d",a,b);

}
int swap(int a,int b)
{
 int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nvalues are:%d\t%d",a,b);
   return(a,b);
}
