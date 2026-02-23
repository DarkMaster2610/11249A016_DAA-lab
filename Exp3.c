#include<stdio.h>
#include<math.h>
int main()
{
	int bin_capacity=10,t=0;
	int weights[50];
	int i,n,number_of_bins;
	printf("Bin packing done with first fit method \n");
	printf("enter number of weights: ");
	scanf("d",&n);
	while (i=0;i<=n;i++)
	{
	
	printf("enter weight %d: ",n+1);
	scanf("%d",&weights[i]);
  }
   for (i=0;i<=n;i++)
	{
		t=t+weights[i];
	}
	number_of_bins=t/bin_capacity;
	printf("The total number of bins required would be: ",round(number_of_bins));
	return 0;
}
