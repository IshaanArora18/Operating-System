#include <stdio.h>
int main()
{
    //Declaring the array,array size(a,n)
   int a[25],n; 
   printf(" Input the array size to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(int i=0;i<n;i++)
      {
	  printf("Enter the element that has to be placed at this location in the array %d : ",i);
	  scanf("%d",a+i);
	  }
   printf("The elements you entered are :\n");
   //Here a-(array name) is the pointer to the first memory location of the continuous memory allocation of the array.
   //If (int(i)) is added to 'a' then we can get the addresses to the following locations in a sequential manner
      for(int i=0;i<n;i++)
      {
	  printf(" element --> %d : %d \n",i,*(a+i));
	  }
	   return 0;
}
