#include<stdio.h>
#define MAX 10
int arr[MAX],i;
int n,temp;
void display()
{
 for(i=0;i<n;i++)
 {
    printf("%d",arr[i]);
 }
}

void insertionsort()
{
  for(i=0;i<n;i++)
  {
 int k=i+1;
   while(k!=0 && arr[k]>arr[k+1])
     {
      temp=arr[k+1];
      arr[k+1]=arr[k];
      arr[k]=temp;
      k--;
     }
  }
}
 void main()
{
  printf(" \n Enter the number of elements in the array:");
  scanf("%d",&n);
  printf(" \n Enter the elements of the array %d :",i+1);
  for(i=0;i<n;i++)
    {
     scanf(" %d",&arr[i]);
    }

insertionsort();
printf(" The elemets in sorted order are:");
display();
}
