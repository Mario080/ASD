 #include <stdio.h>

 int main()
{

    int masukan, i,data[10],cari,jumlah=0;

    printf ("Masukan data: ");
    scanf("%d",&masukan);
    printf("Masukan %d Integernya: \n",masukan);
    for (i=0;i<masukan;i++)
        scanf("%d",&data[i]);
    menu:
    printf("\nCari Angka Berapa: ");
    scanf("%d",&cari);
    for (i=0;i<masukan;i++)
    {
        if (data[i]==cari)
        {
            printf("angka %d ketemu, dan tersimpan di lokasi indeks %d",cari,i+1);
            system ("pause>0");return 0;
        }

    }
    if (i==masukan)
        printf("angka %d tidak ditemukan, cari yang benar!\n", cari);system ("pause>0");goto menu;

}