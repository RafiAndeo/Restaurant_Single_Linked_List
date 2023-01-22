#include <iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

struct makanan{
    string nama;
    int jumlah;
    int harga;
};

typedef makanan infotype;
typedef struct elmtSingle *adrSingle;

struct elmtSingle{
    infotype info;
    adrSingle next;
};

struct List{
    adrSingle first;
};

void create_list(List &L){
    first(L) = nil;
}

adrSingle alokasi(infotype x){
    adrSingle p = new elmtSingle;
    info(p) = x;
    next(p) = nil;
    return p;
}

void insertLast(List &L, adrSingle p){
    adrSingle q;
    if (first(L) == nil){
        first(L) = p;
    }else {
        q = first(L);
        while (next(q) != nil){
            q = next(q);
        }
        next(q) = p;
    }
}

void add_n_data(List &L){
    int n;
    int z = 1;
    adrSingle p;
    infotype x;
    cout << " " << endl;
    cout << "Masukkan jumlah makanan yang ingin dipesan : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << " " << endl;
        cout << "Masukkan nama makanan " << z << ": ";
        cin >> x.nama;
        cout << "Masukkan jumlah pesanan: ";
        cin >> x.jumlah;
        if(x.nama == "Bakso"){
            x.harga = 10000 * x.jumlah;
        }else if(x.nama == "NasiGoreng" || x.nama == "Nasigoreng"){
            x.harga = 15000 * x.jumlah;
        }else if(x.nama == "Batagor"){
            x.harga = 2000 * x.jumlah;
        }else if(x.nama == "LumpiaBasah" || x.nama == "Lumpiabasah"){
            x.harga = 7000 * x.jumlah;
        }else if(x.nama == "MieGoreng" || x.nama == "Miegoreng"){
            x.harga = 6000 * x.jumlah;
        }else if(x.nama == "MieKuah" || x.nama == "Miekuah"){
            x.harga = 6000 * x.jumlah;
        }else if(x.nama == "SateAyam" || x.nama == "Sateayam"){
            x.harga = 3000 * x.jumlah;
        }else if(x.nama == "SateKambing" || x.nama == "Satekambing"){
            x.harga = 5000 * x.jumlah;
        }else if(x.nama == "Donat"){
            x.harga = 8000 * x.jumlah;
        }else if(x.nama == "AyamGoreng" || x.nama == "Ayamgoreng"){
            x.harga = 5000 * x.jumlah;
        }else if(x.nama == "AyamBakar" || x.nama == "Ayambakar"){
            x.harga = 4000 * x.jumlah;
        }else if(x.nama == "AyamGulai" || x.nama == "Ayamgulai"){
            x.harga = 6000 * x.jumlah;
        }else if(x.nama == "AyamCabeIjo" || x.nama == "AyamCabeijo" || x.nama == "Ayamcabeijo"){
            x.harga = 4000 * x.jumlah;
        }else if(x.nama == "AyamCabeMerah" || x.nama == "AyamCabemerah" || x.nama == "Ayamcabemerah"){
            x.harga = 4000 * x.jumlah;
        }else if(x.nama == "AyamSuwir" || x.nama == "Ayamsuwir"){
            x.harga = 2000 * x.jumlah;
        }else if(x.nama == "AyamPop" || x.nama == "Ayampop"){
            x.harga = 5000 * x.jumlah;
        }else if(x.nama == "AyamSemur" || x.nama == "Ayamsemur"){
            x.harga = 6000 * x.jumlah;
        }else if(x.nama == "Lasagna"){
            x.harga = 25000 * x.jumlah;
        }else if(x.nama == "Spaghetti"){
            x.harga = 20000 * x.jumlah;
        }else if(x.nama == "Pizza"){
            x.harga = 30000 * x.jumlah;
        }else if(x.nama == "NasiKuning" || x.nama == "Nasikuning"){
            x.harga = 10000 * x.jumlah;
        }else if(x.nama == "NasiUduk" || x.nama == "Nasiuduk"){
            x.harga = 10000 * x.jumlah;
        }else if(x.nama == "Puding"){
            x.harga = 12000 * x.jumlah;
        }else if(x.nama == "KueKering" || x.nama == "Kuekering"){
            x.harga = 8000 * x.jumlah;
        }else if(x.nama == "KueTart" || x.nama == "Kuetart"){
            x.harga = 50000 * x.jumlah;
        }
        p = alokasi(x);
        insertLast(L, p);
        z++;
    }
    cout << " " << endl;
    cout << "Anda sudah memesan" << endl;
    cout << " " << endl;
}

void show(List L){
    int i = 1;
    int total = 0;
    if (first(L) != nil) {
        adrSingle p = first(L);
        cout << " " << endl;
        while (p != nil){
            cout <<  i << "." << info(p).nama << " dengan jumlah " << info(p).jumlah << endl;
            total = total + info(p).harga;
            p = next(p);
            i = i + 1;
        }
        cout << " " << endl;
        cout << "Total harga: " << total;
    }else {
        cout << "List Pesanan Kosong" << endl;
    }
    cout << " " << endl;
}

void showMenu(){

    cout << " " << endl;
    cout << "Bakso Rp.10000" << endl;
    cout << "Nasi Goreng Rp.15000" << endl;
    cout << "Batagor Rp.2000" << endl;
    cout << "Lumpia Basah Rp.7000" << endl;
    cout << "Mie Goreng Rp.6000" << endl;
    cout << "Mie Kuah Rp.6000" << endl;
    cout << "Sate Ayam Rp.3000" << endl;
    cout << "Sate Kambing Rp.5000" << endl;
    cout << "Donat Rp.8000" << endl;
    cout << "Ayam Goreng Rp.5000" << endl;
    cout << "Ayam Bakar Rp.4000" << endl;
    cout << "Ayam Gulai Rp.6000" << endl;
    cout << "Ayam Cabe Ijo Rp.4000" << endl;
    cout << "Ayam Cabe Merah Rp.4000" << endl;
    cout << "Ayam Suwir Rp.2000" << endl;
    cout << "Ayam Pop Rp.5000" << endl;
    cout << "Ayam Semur Rp.6000" << endl;
    cout << "Lasagna Rp.25000" << endl;
    cout << "Spaghetti Rp.20000" << endl;
    cout << "Pizza Rp.30000" << endl;
    cout << "Nasi Kuning Rp.10000" << endl;
    cout << "Nasi Uduk Rp.10000" << endl;
    cout << "Puding Rp.12000" << endl;
    cout << "Kue Kering Rp.8000" << endl;
    cout << "Kue Tart Rp.50000" << endl;
    cout << " " << endl;

}

int main()
{
    List L;
    adrSingle p;
    infotype s;
    int menu;
    bool userActivity = true;
    create_list(L);

    cout << "Aplikasi Makanan" << endl;
    cout << " " << endl;
    cout << "1. Lihat Menu Lengkap" << endl;
    cout << "2. Pesan Makanan" << endl;
    cout << "3. Lihat Daftar Pesanan" << endl;
    cout << "4. Keluar" << endl;
    cout << " " << endl;
    cout << "Masukkan pilihan nomor: ";
    cin >> menu;
    while(userActivity == true){
        if(menu == 1){
            showMenu();
        }else if (menu == 2){
            add_n_data(L);
        }else if (menu == 3){
            show(L);
        }else if (menu == 4){
            cout << " " << endl;
            cout << "Anda sudah keluar dari aplikasi" << endl;
            break;
        }else{
            cout << "Pilihan nomor tidak tepat, silahkan pilih ulang: ";
            cin >> menu;
        }
        cout << "Masukkan pilihan nomor: ";
        cin >> menu;
    }
}
