//Home Assignment
//Day01 Prog02
//WAP to reverse the elements of an array without using any other variable
//Made by:-
//Raunak Kumar Lal
//2nd Year CSE 'C' 
//Roll-1651158

//Header File
#include <stdio.h>

int main()
{
	int i,n;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	
	int *arr;
	//Allocating the space for the array
	arr=(int*)malloc(n*sizeof(int));
	
	//Taking the input in the array
	printf("\nEnter the elements of the array: \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	//Showing the given array
	printf("\nThe given array is: \n");
	for(i=0;i<n;i++)
		printf("  %d  ",arr[i]);
	
	//Reversing the array
	for(i=0;i<n/2;i++){
		arr[i]=arr[i]+arr[n-i-1];
		arr[n-i-1]=arr[i]-arr[n-i-1];
		arr[i]=arr[i]-arr[n-i-1];
	}
	
	//Showing the reversed array
	printf("\nThe reversed array is :\n");
	for(i=0;i<n;i++)
		printf("  %d  ",arr[i]);
	
	//Freeing the space allocated for the array
	free(arr);
	
	return 0;
}