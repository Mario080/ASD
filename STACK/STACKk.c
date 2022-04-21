#define MAX_STACK 5
#include <string.h>
typedef struct
{
    int top;
     char data[5][5];

}stack;
 stack tumpuk;
void inisialisasi()
{
    tumpuk.top=-1;
}
int isfull()
{
    if (tumpuk.top==MAX_STACK -1) return 1;
        else return 0;

}

void push(char d[5])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d);
}

void pop()
{
    printf("data yang diambi = %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void tampilstack()
{
    for(int i=tumpuk.top; i>0;i--)
    {
        printf("data: %s\n", tumpuk.data[i]);

    }
}

void bersihkan()
{
    tumpuk.top =-1;
}

int isempty()
{
    if(tumpuk.top==-1)
        return 1;
    else return 0;
}

int main ()
{
    int pilih;inisialisasi();
    char dt[5];
    do
    {
        printf("1. push\n");
         printf("2. pop\n");//menghapus data paling atas
          printf("3. cetak isi array stack\n");
           printf("4. hapus isi array stack!\n");
            printf("5. keluar\n");
             printf("pilihan: ");scanf("%d",& pilih);

             switch (pilih)
             {
             case 1:
                 if (isfull()!=1)

                 {
                     printf ("data yang ingin di inputkan = ");
                     scanf("%s",dt);
                     push(dt);

                 }
                else printf("stack sudah penuh!\n");
                break;

                case 2: if(isempty()!=1)
                        pop();
                    else printf("stack masiih kosong\n");
                    break;


                    case 3:if(isempty()!=1)
                        tampilstack();
                        else printf("\n kosong woy\n");
                        break;

                        case 4:
                                 bersihkan();
                                 printf("data sudah di hapus!\n");
                                 break;
                            case 5:
                                return 0;

        }

    } while (pilih !=5);
    printf("anda keluar dari program!!!\n");

}

