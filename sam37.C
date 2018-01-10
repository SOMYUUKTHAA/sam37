#include<stdio.h>
int swap(int a,int b);
void main()
{
 int c=10,d=20,temp;
 printf("BEFORE SWAPPING");
 printf("\nTHE VALUES ARE:\t%d\t%d",c,d);
 printf("\nCALLING SWAP");
 swap(c,d);
 printf("\nAFTER SWAPPING");

}
int swap(int a,int b)
{
 int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nTHE VALUES ARE:\t%d\t%d",a,b);
}
