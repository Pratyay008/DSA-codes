#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <limits.h>


int MatrixChainMulti(int p[], int i, int j){
    if(i==j)
        return 0;
    int k;
    int min = 9999999;
    int count;

    for(k=i; k<j; k++){
        count = MatrixChainMulti(p,i,k) + MatrixChainMulti(p,k+1,j) + (p[i-1]*p[k]*p[j]);
        if(count<min)
            min=count;
    }
    return min;

}



int main()
{
	int arr[] = { 4, 10, 3, 12, 20, 7};
	int N = sizeof(arr) / sizeof(arr[0]);

	printf("Minimum number of multiplications is : %d \n ", MatrixChainMulti(arr, 1, N - 1));

	return 0;
}