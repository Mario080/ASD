#include <stdio.h>
#include <stdlib.h>

/*
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

/*
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



   void upil;
    int aku;
    printf("1. aku\n2. kamu\n3. exit");
    scanf ("%d",&jawab);

int main()
{
    int i, j;
    int *p;

    p=&i;
    *p=5;
    j=i;
    printf("%d %d %d",i,j,*p);





    do printf("i love you");
    while upil==1

}


////LINKED LIST

struct node{
int data;
    struct node*next;

};
typedef struct node node_t;

void cetak(node_t *head)
{
    node_t *sementara = head;

    while (sementara != NULL)
    {
        printf("%d - ", sementara->data);
        sementara = sementara->next;

    }
    printf("\n");
}

int main()
{
    node_t n1,n2,n3;
    node_t *head;

    n1.data = 25;
    n2.data = 30;
    n3.data = 20;

//link
head = &n3;
n3.next = &n2;
n2.next = &n1;
n1.next = NULL;

cetak(head);


}
/////////////////////////////////////////////// LINKED LIST JADINYA

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


*/
/*
/////////////////////////////////////////////STACK QUENE

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



///////////////////////////////////////////////////////////////////////////////////////
//Koding untuk antrian:
*/


#define MAX 3

typedef struct
{
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antrian;

void Awal()
{
    antrian.head=antrian.tail=-1;
}

int Kosong()
{
    if(antrian.tail==-1)
        return 1;
    else
        return 0;
}

int Penuh()
{
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

int Enqueue(int data)
{
    if(Kosong()==1)
    {
        antrian.head=antrian.tail=0;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
        void Tampil();
        {
            if(Kosong()==0)
            {
                for(int i=antrian.head; i<=antrian.tail; i++)
                {
                    printf("%d ", antrian.data[i]);
                }
            }
            else
                printf("Isi antrian kosong!");
        }
    }
    else if (Penuh()==0)
    {
        antrian.tail++;
        antrian.data[antrian.tail]=data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
    }
}

int Dequeue()
{
    int antri = antrian.data[antrian.head];
    for(int i=antrian.head; i<=antrian.tail; i++)
    {
        antrian.data[i] = antrian.data[i+1];
    }
    antrian.tail--;
    return antri;
}

void Tampil()
{
    if(Kosong()==0)
    {
        for(int i=antrian.head; i<=antrian.tail; i++)
        {
            printf("%d ", antrian.data[i]);
        }
    }
    else
        printf("Tidak ada data dalam antrian!");
}

void Hapus()
{
    antrian.head=antrian.tail=-1;
    printf("Data sudah dibersihkan!\n");
}

void main()
{
    int pilihan;
    int data;
    Awal();
    do
    {
        printf("\n");
        printf("1. MasukSatuData\n");
        printf("2. KeluarSatuData\n");
        printf("3. Lihat isi antrian\n");
        printf("4. Hapus isi antrian\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda? ");
        scanf("%d", &pilihan);
        switch(pilihan)
        {
            case 1:
                printf("Data = ");
                scanf("%d", &data);
                Enqueue(data);
                break;
            case 2:
                printf("Data yang keluar: %d", Dequeue());
                break;
            case 3:
                Tampil();
                break;
            case 4:
                Hapus();
                break;
        }
    }while(pilihan!=5);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/*
struct node{
int data;
struct node *kiri;
struct node *kanan;
};


void tambah(struct node **root,int dataku)
{
    if ((*root)==NULL)
    {
        struct node *baru;
        baru=new node;
        baru->data=data;
        baru->kiri=NULL;
        baru->kanan=NULL;
        (*root)=baru;
        (*root)->kiri =NULL;
        printf("data bertambah!");

    }
    else if(data<(*root)->data)
        tambah(&(*root)->kiri, data);
    else if(data>(*root)->data)
        tambah(&(*root)->kanan, data);
    else if(data==(*root)->data)
        printf("data sudah ada");


}

int main()
{
    int milih,data,tree;



    do
    {
        system("cls");
        printf("program tree\n\n");
        printf("1. input data\n2. Preorder\n3. Postorder\n4. Inorder\n5. exit\npilihan: "); scanf("%d",& milih);

        switch(milih)
        {
        case 1:
            printf("\ninput\n");
            printf("\ndata baru: ");
            scanf("%d",& data);
            tambah(&tree,data );
            break;

 //       case 2: break;
   //     case 3: break;
     //   case 4: break;
        }
    }
        while(milih!=5);
}
*/
