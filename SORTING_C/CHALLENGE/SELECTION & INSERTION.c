#include<stdio.h>

//CHALLENGE==============================>
void kuchiose(int *e, int *l)
{
	int temp = *e;
	*e = *l;
	*l = temp;
}

void Selection (int Data[ ], int el)
{
 int min;

        for(int i = 0; i < el-1 ; i++)
    {
            min = i ;
            for(int j = i+1; j < el ; j++ )
        {
                if(Data[ j ] < Data[ min ])
            {
                min = j ;
            }
        }
          kuchiose(&Data[ min ], &Data[ i ]) ;
    }
}


void insertion(int *Data2, int u)
{
    int tempe, j;
    for (int i = 1; i <= u-1; i++)
  {
    tempe = Data2[i];
        j = i-1;

   while(j>=0 && Data2[j] > tempe)
        {
            Data2[j+1] = Data2[j];
            j--;
        }
    Data2[j+1] = tempe;
  }
}

void hasil(int* Data, int el)
{
    for (int i = 0; i < el; i++)
    {
        printf("%d ", Data[i]);
    }
    printf("\n");
}


void hasil2(int* Data2, int u){
    for (int i = 0; i < u; i++)
    {
        printf("%d ", Data2[i]);
    }
    printf("\n");
}

int main()
{
    int Data[] = {23, 67, 89, 5, 45, 20, 15, 27};
    int el = sizeof(Data)/sizeof(Data[0]);

	int jawab;

    int Data2[] = {23, 67, 89, 5, 45, 20, 15, 27};
    int u = sizeof(Data2)/sizeof(Data2[0]);

	menu:
    printf("NAMA: MARIO REGGY Y \nNIM : 672021080\n\n");
    printf("1. Selection Sort\n2. Insertion Sort\n3. EXIT\n\nPILIHAN: ");scanf("%d",&jawab);
    if (jawab<=3)
    { system("cls");


            switch(jawab)
        {

            case 1:


                    printf("<SELECTION SORT>\n");
                    printf("ANGKA ACAK      : ");
                    hasil(Data, el);

                    printf("ANGKA ASCENDING : ");
                    Selection(Data, el);
                    hasil(Data, el);
                    system("pause>0");system("cls");goto menu;


            case 2:


                printf("<INSERTION SORT>\n");
                printf("ANGKA ACAK      : ");
                hasil2(Data2, u);

                printf("ANGKA ASCENDING : ");
                insertion(Data2, u);
                hasil2(Data2, u);
                system("pause>0");system("cls");goto menu;

            case 3:
                return 0;

        }

    } else printf("\n\npilihan salah\n\n"); system("pause>0");system("cls");goto menu;


}