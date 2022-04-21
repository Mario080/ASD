#include <stdio.h>

//BUBBLE SORT
void summon(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble(int arr[], int N)
{
	for(int i =0; i<N-1; i++)
 {


		for(int j=0; j<N-1-i; j++)
    {
			// >  ascending
			// <  descending
			if(arr[j] > arr[j+1])
        {
			//summon
			summon(&arr[j], &arr[j+1]);
		}
	}
 }
}

void bubble2(int arr[], int N)
{
	for(int i =0; i<N-1; i++)
 {


		for(int j=0; j<N-1-i; j++)
    {
			// >  ascending
			// <  descending
			if(arr[j] < arr[j+1])
        {
			//summon
			summon(&arr[j], &arr[j+1]);
		}
	}
 }
}


void print(int arr[], int N)
{
	for(int i=0; i<N; i++)
    {
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {10, 2, 1, 4, 3, 8, 7};

	 //sedang mencari array disini
	int N = sizeof(arr)/sizeof(arr[0]);


	printf("ANGKA ACAK       : ");
	print(arr,N);
	puts("");

	printf("ANGKA ASCENDING  : ");
	bubble(arr, N);
	print(arr, N);
	puts("");

	printf("ANGKA DESCENDING : ");
	bubble2(arr, N);
	print(arr, N);
	puts("");

	return 0;
}