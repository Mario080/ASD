#include <stdio.h>


//INSERTION SHORT
void insertion(int *Data, int u)
{
    int temp, j;

    for (int i = 1; i <= u-1; i++)
  {
        temp = Data[i];
        j = i-1;

        while(j>=0 && Data[j] > temp)
        {
            Data[j+1] = Data[j];
            j--;
        }
        Data[j+1] = temp;
  }
}

void insertion2(int *Data, int u)
{
    int temp, j;

    for (int i = 1; i <= u-1; i++)
  {
        temp = Data[i];
        j = i-1;

        while(j>=0 && Data[j] < temp)
        {
            Data[j+1] = Data[j];
            j--;
        }
        Data[j+1] = temp;
  }
}

void print(int* Data, int u){
    for (int i = 0; i < u; i++){
        printf("%d ", Data[i]);
    }
    printf("\n");
}

int main(){

    int Data[] = {20, 2, 2002, 48, 62, 100};


	int u = sizeof(Data)/sizeof(Data[0]);

    printf("ANGKA ACAK      : ");
    print(Data, u);

    printf("ANGKA ASCENDING : ");
    insertion(Data, u);
    print(Data, u);

    printf("ANGKA DESCENDING: ");
    insertion2(Data, u);
    print(Data, u);
    return 0;
}
