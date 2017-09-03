//Home Assignment
//Day01 Prog01
//Write a Program(WAP) to check whether a matrix is
//	(i) identity, (ii) diagonal
//Made by:-
//Raunak Kumar Lal
//2nd Year CSE 'C'
//Roll-1651158

//Header File
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **matrix;
	int n,i,j,zerocount=0,zerodiag=0,flag=1;
	srand(time(NULL));

	//Ask for the size of the matrix
	printf("\nEnter the size of the square matrix: ");
	scanf("%d",&n);

	//Allocate space for the matrix
	matrix=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
		matrix[i]=(int*)malloc(n*sizeof(int));

	//Enter the values in the matrix
    	printf("\nEnter the values in the matrix: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
//			matrix[i][j]=rand()%2;

			//Calculating the no. of zero elements in the matrix
			if(matrix[i][j]==0)
				zerocount++;
		}

    	//Printing the given matrix
    	printf("\nThe given matrix is: \n\n");
    	for(i=0;i<n;i++){
        	printf("\n");
		for(j=0;j<n;j++)
            		printf("%3d",matrix[i][j]);
    	}
    	//Calculating the no. of zero elements in the diagonal
	for(i=0;i<n;i++)
    		if(matrix[i][i]==0)
    			zerodiag++;
	
	if(n*n - n == zerocount - zerodiag)
    	{
    		printf("\n\nIt is a Diagonal Matrix.\n");

	    	for(i=0;i<n;i++)
    			if(matrix[i][i]!=1)
    				flag=0;

	    	if(flag)
    			printf("\nIt is also an Identity Matrix.\n");
    		else
    			printf("\nBut it is not an Identity Matrix.\n");
    	}
    	else
    		printf("\nIt is neither a Diagonal nor an Identity Matrix.\n");

	return 0;
}