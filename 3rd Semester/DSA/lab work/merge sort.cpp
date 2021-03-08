#include<conio.h>
#include<stdio.h>
void merge_sort(int i,int j ,int a[],int b[])
{
	if(j<=1)
	{
		return;
	}
     int mid=(i+j)/2;
     
     merge_sort(i,mid,a,b);
     merge_sort(mid+1,j,a,b);
     
	 int left=i;
     int right=mid+1;
    
	for(int k=i;k<=j;k++)
    {
    	if(left=mid+1)
    	{
    		b[k]=a[right];
    		right++;
		}
		else if(right==j+1)
		{
			b[k]=a[left];
			left++;
		}
		else if(a[left]<a[right])
		{
			b[k]=a[left];
			left++;
		}
		else
		{
			b[k]=a[right];
			right++;
		}
	}
        for(int k=i;k<=j;k++)
        {
    	  a[k]=b[k];
	    }
}
	    
int main()
     {
     	int a[100],b[100],i,n;
     	
		printf("Enter the number of data to be sorted.\n");
     	scanf("%d",&n);
     	
     	printf("\nEnter %d no. of elements that are to be sorted.\n",n);
     	for(int i=0;i<n;i++)
     	{
     		printf("Element no. %d\n",i+1);
     		scanf("%d",&a[i]);
		}
     merge_sort(0,n-1,a,b);
     
     printf("The sorted data :");
     	for(int i=0;i<n;i++)
     	{
          printf("%d",a[i]);
	    }
    }

