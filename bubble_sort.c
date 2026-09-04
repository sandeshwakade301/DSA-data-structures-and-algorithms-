#include<stdio.h>
void bubble_sort(int n,int a[])
{
	int i,step,t;

   for(i=0; i<n; i++)
   {
	for(step=0; step<n-i-1; step++)
	{
    		if(a[step]>a[step+1])
    		{
    			t=a[step];
    			a[step]=a[step+1];
    			a[step+1]=t;
			}
	}
   }
   
}

void main()
{
	int i,n,a[100];
	
	printf("Enter limit :");
	scanf("%d",&n);
	
	printf("Enter array element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}	
	
	bubble_sort(n,a);
 displya(n,a);   
}

void displya(int n,int a[])
{
	int i;
	
	printf("displya sort array : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
