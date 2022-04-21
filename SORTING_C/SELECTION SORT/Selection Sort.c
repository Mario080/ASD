#include<stdio.h>

//SELECTION SHORT
void summon(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Selection (int Data[ ], int n)
{

        //penyimpanan posisi data minimum
	    int min;

        for(int i = 0; i < n-1 ; i++)
    {
             min = i ;

            //mencari data minimum
            for(int j = i+1; j < n ; j++ )
        {
                if(Data[ j ] < Data[ min ])
            {
                min = j ;
            }
        }
          summon (&Data[ min ], &Data[ i ]) ;
    }
}


void Selection2 (int Data[ ], int n)
{

        //penyimpanan posisi data minimum
	    int min;

        for(int i = 0; i < n-1 ; i++)
    {
             min = i ;

            //mencari data minimum
            for(int j = i+1; j < n ; j++ )
        {
                if(Data[ j ] > Data[ min ])
            {
                min = j ;
            }
        }
          summon (&Data[ min ], &Data[ i ]) ;
    }
}


void print(int* Data, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}

int main(){

    int Data[] = {99, 22, 39, 81, 70, 15};

	//menyesuaikan ukuran array dari data.
	int n = sizeof(Data)/sizeof(Data[0]);

    printf("ANGKA ACAK       : ");
    print(Data, n);

    printf("ANGKA ASCENDING  : ");
    Selection(Data, n);
    print(Data, n);

    printf("ANGKA DESCENDING : ");
    Selection2(Data, n);
    print(Data, n);
    return 0;
}