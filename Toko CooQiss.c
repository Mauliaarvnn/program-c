#include<stdio.h>
#include<stdlib.h>

void clearScreen(){
    system("cls");
}

void tampilanAtas(){
    printf("+==================================================================+\n");
    printf("|                                                                  |\n");
    printf("|                        W E L C O M E  T O                        |\n");
    printf("|                          C O O Q I S S                           |\n");
    printf("|                                                                  |\n");
    printf("+==================================================================+\n");
}

void tampilanBawah(){
    printf("+==================================================================+\n");
    printf("|                                                                  |\n");
    printf("|                        T H A N K Y O U !                         |\n");
    printf("|                                                                  |\n");
    printf("+==================================================================+\n");
}

void tampilanRasa(){
    printf("\n");
    printf("+----------------------------------------------+\n");
    printf("|\t         Pilihan Rasa                  |\n");
    printf("+----------------------------------------------+\n");
    printf("|1. QissVanila : 17K                           |\n");
    printf("|2. QissMatcha : 25K                           |\n");
    printf("|3. QissChocoo : 27K                           |\n");
    printf("+----------------------------------------------+\n");
}


 int main (){
     int jumlahPesanan, pilihanRasa, lanjut;
     int harga = 0, hargaSementara = 0, hargaTotal = 0;
     float bayar, kembalian;

     do{
        tampilanAtas();
        tampilanRasa();

        printf("Silahkan Pilih Varian Rasa: ");
        scanf("%d", &pilihanRasa);

        switch(pilihanRasa){
        case 1 :
            harga = 17000;
            printf("\n+--------------------------------+\n");
            printf("|\t    QissVanila           |\n");
            printf("+--------------------------------+\n");
            break;

        case 2 :
            harga = 25000;
            printf("\n+--------------------------------+\n");
            printf("|\t    QissMatcha           |\n");
            printf("+--------------------------------+\n");
            break;

        case 3 :
            harga = 27000;
            printf("\n+--------------------------------+\n");
            printf("|\t    QissChocoo           |\n");
            printf("+--------------------------------+\n");
            break;

            default : printf("Pilihan Tidak Valid.\n"); continue;
        }


        printf("Masukkan jumlah pesanan: ");
        scanf("%d", &jumlahPesanan);

        hargaSementara = harga * jumlahPesanan;
        hargaTotal += hargaSementara;

        printf("\n+------------------------------------+\n");
        printf("Jumlah Pesanan : %d", jumlahPesanan);
        printf("\n+------------------------------------+\n");
        printf("Harga : Rp.%d", hargaSementara);
        printf("\n+------------------------------------+\n");

        printf("Tekan enter untuk melanjutkan....");
        getchar(); getchar();

        clearScreen();

        printf("Beli Lagi? (1 = Ya, 0 = Tidak): ");
        scanf("%d", &lanjut);
     }while(lanjut == 1);

     printf("\n+---------------------------------------+\n");
     printf("Total Harga: Rp.%d", hargaTotal);
     printf("\n+---------------------------------------+\n");


    do{
        printf("Silahkan Masukkan Uang: ");
        scanf("%f", &bayar);
        if(bayar < hargaTotal){
            printf("\nUang Anda Kurang.  Mohon Masukkan Ulang.\n");
        }else if(bayar == hargaTotal){
            printf("Pembayaran Berhasil.\n\n");
            break;
        }else{
            kembalian = bayar - hargaTotal;
            printf("Pembayaran Berhasil. Kembalian Rp.%.2f\n\n", kembalian);
            break;
        }
    }while( bayar < hargaTotal);

    printf("\n");
    tampilanBawah();


    return 0;
 }
