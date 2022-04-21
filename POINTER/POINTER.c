#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
    struct node*next;

};
 struct node *head;

void awal()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr ==NULL)
    {
        printf("\n OVERFLOW");

    }
    else
    {   system("cls");
        printf("masukan data: ");scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Data Berhasil Tersimpan di NODE awal!");
    }
}

void akhir()
{
     struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr ==NULL)
    {
        printf("\n OVERFLOW");

    }
    else
    {   system("cls");
        printf("masukan data: ");scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = NULL;
            head= ptr;
            printf ("Berhasil ");
            printf("\nData Berhasil Tersimpan di NODE awal!");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp->next;
            }temp -> next = ptr;
            ptr->next = NULL;
            printf("data berhasil di simpan di node akhir!");

        }

}
}

void sembarang()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr=(struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
         printf("\n OVERFLOW");

    else{

        system("cls");
        printf("masukan data: ");scanf("%d",&item);
        ptr->data = item;
        printf("masukan data dimana?"); scanf("%d", &loc);
        temp = head;

        for (i=0;i<loc;i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                 printf("tidak dapat tersimpan");return;
            }

        }

            ptr->next = temp ->next;
            temp->next = ptr;
            printf ("Berhasil ");
            printf("\nData Berhasil Tersimpan di NODE!");
        }
    }

void lihat()
{
    struct node *ptr;
    ptr = head;
    if (ptr==NULL)
    {
        printf("tidak ada data!!!");
    }
    else{printf("cetak data...\n");
        while (ptr!=NULL)
        {
            printf ("%d\n",ptr->data);
            ptr = ptr->next;
        }
    }
}



int main()
{
   int pilihan = 0;
   while (pilihan != 5)//5 untuk explicit
   {
       printf("\n\n*****menu latihan linked list*****\n\n");
       printf("======================================\n\n");
       printf("1.INPUT DATA DI NODE AWAL\n2.INPUT DATA DI NODE AKHIR\n3.INPUT DATA DI NODE SEMBARANG\n4.LIHAT DATA DALAM LINK LIST\n5.EXIT\n");
       printf("\n pilihan? ");
       scanf("%d",&pilihan);
       switch(pilihan)
       {
       case 1:
         awal();
        break;

        case 2:
        akhir();
        break;

        case 3:
       system("cls"); sembarang();
        break;

        case 4:
       system("cls"); lihat();
        break;

        case 5:
        exit(0);
        break;

        default:
            printf("silahkan masukan pilihanmu...");
       }
   }
}
