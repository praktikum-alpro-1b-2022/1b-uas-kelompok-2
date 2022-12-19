#include <iostream>
#include <iomanip>

using namespace std;

struct Matakuliah
{
    int tgs,uts,project,uas;
    float nakhir;
    string matkul;
    char grade;

};
int pil;
string nmhs,npm,kelas;
void dosen (){
	cout << "=====================================================================" << endl;
    cout << "                  PROGRAM SISTEM INFORMASI AKADEMIK                  " << endl;
    cout << "          Selamat Datang di Sistem Informasi Akademik UNSIKA         " << endl;
    cout << "=====================================================================" << endl;
    cout << endl;
    cout << "                      ---------- MENU -----------                    " << endl;

    cout << endl;
    cout << " 1. ABSENSI " << endl;
    cout << " 2. INPUT NILAI MAHASISWA" << endl;
    cout << " 3. EXIT" << endl;
    cout << "Masukkan pilihan anda" << endl;
    cin >> pil;
}
void mhs (){
	cout << "=====================================================================" << endl;
    cout << "                  PROGRAM SISTEM INFORMASI AKADEMIK                  " << endl;
    cout << "          Selamat Datang di Sistem Informasi Akademik UNSIKA         " << endl;
    cout << "=====================================================================" << endl;
    cout << endl;
    cout << "                      ---------- MENU -----------                    " << endl;

    cout << endl;
    cout << " 1. ABSENSI " << endl;
    cout << " 2. EXIT" << endl;
    cout << "Masukkan pilihan anda" << endl;
    cin >> pil;
}


int main ()
{
    char oper;

    login :
    string username, password;
    string *uname=&username;


    cout<<" \n\n\n \t\t\t\t\t ---- LOGIN SISTEM AKADEMIK INFORMASI ----  \t\t\t\t \n";
    cout << "\t\t\t\Masukkan username: ";
    cin >> username;
    cout << "\t\t\tMasukkan password: ";
    cin >> password;

    if (username == "admin" && password == "admin123"){
            cout << endl << "Login Berhasil" << endl;
            cout << &username << endl;
            cout << uname << endl;
			system("pause");
			system("cls");
			goto menu1;

    }
    if (username == "mhs" && password == "mhs123"){
			cout << endl << "Login Berhasil" << endl;
			cout << &username << endl;
            cout << uname << endl;
			system("pause");
			system("cls");
			goto menu2;

    }else if (username == "admin" ){
        cout << endl << "password salah" << endl;
        cout << &username << endl;
        cout << uname << endl;
        system("pause");
        system("cls");
        goto login;


    }else if (password == "admin123"){
        cout << endl << "username salah" << endl;
        cout << &username << endl;
        cout << uname << endl;
        system("pause");
        system("cls");
        goto login;


    }
    else if (username == "mhs" ){
        cout << endl << "password salah" << endl;
        cout << &username << endl;
        cout << uname << endl;
        system("pause");
        system("cls");
        goto login;


    }else if (password == "mhs123"){
        cout << endl << "username salah" << endl;
        cout << &username << endl;
        cout << uname << endl;
        system("pause");
        system("cls");
        goto login;


    }else{
        cout << endl << "Username dan password tidak sesuai!" << endl;
        cout << &username << endl;
        cout << uname << endl;
        system("pause");
        system("cls");
        goto login;

        }
    menu1:
    dosen ();

    system("cls");
    if (pil==1){
        cout << "Daftar Hadir Dosen" << endl;
        cout << "======================" << endl;
        cout << "1. Hadir" << endl;
        cout << "2. Sakit" << endl;
        cout << "3. Izin" << endl;
        cout << "======================" << endl;
        cin >> oper;

        switch (oper) {
            case '1':
            cout << "Selamat absen anda berhasil!" << endl;
            cout << "Tekan apapun untuk kembali ke Beranda" << endl;
            break;
            case '2':
            cout << "Selamat absen anda berhasil!" << endl;
            cout << "Tekan apapun untuk kembali ke Beranda" << endl;
            break;
            case '3':
            cout << "Selamat absen anda berhasil!" << endl;
            cout << "Tekan apapun untuk kembali ke Beranda" << endl;
            break;
        }system("pause");
         system("cls");
         goto menu1;
        }
    if (pil==2){



    int n;

    cout << "Nama Mahasiswa : ";
    getline(cin,nmhs);
    getline(cin,nmhs);
    cout << "NPM            : ";
    cin >> npm;
    cout << "Kelas          : ";
    getline(cin,kelas);
    getline(cin,kelas);
    cout << "\nJumlah Mata Kuliah Yang Ingin di Input : ";
    cin >> n;
    Matakuliah mk[n];


            for (int i=0;i<n;i++){
            cout << "Mata Kuliah : ";
            getline(cin,mk[i].matkul);
            getline(cin,mk[i].matkul);
            cout << "Input Nilai Tugas   : " ;
            cin >> mk[i].tgs;
            cout << "Input Nilai UTS     : " ;
            cin >> mk[i].uts;
            cout << "Input Nilai Project : " ;
            cin >> mk[i].project;
            cout << "Input Nilai UAS     : " ;
            cin >> mk[i].uas;
            mk[i].nakhir = (mk[i].tgs*0.2) + (mk[i].uts*0.25) + (mk[i].project*0.25) + (mk[i].uas*0.3);
            cout << endl; }


            for (int i=0;i<n;i++){
            if((mk[i].nakhir >=85)&&(mk[i].nakhir <=100)){
                mk[i].grade ='A';
            }else if((mk[i].nakhir >=75)&&(mk[i].nakhir <85)){
                mk[i].grade ='B';
            }else if((mk[i].nakhir >=65)&&(mk[i].nakhir <75)){
                mk[i].grade ='C';
            }else if((mk[i].nakhir >=50)&&(mk[i].nakhir <65)){
                mk[i].grade ='D';
            }else{
                mk[i].grade ='E';
            }}

            system("cls");
            cout << npm << endl;
            cout << nmhs << endl;
            cout << kelas << endl << endl;
            cout << "\t\t TABEL NILAI MAHASISWA " << endl;
            cout << "--------------------------------------------------------------------------------\n";
            cout << "|          MATA KULIAH           | TUGAS  |  UTS  |  PROJECT  |  UAS  | GRADE  | \n";
            cout << "--------------------------------------------------------------------------------\n";
            for (int i=0;i<n;i++){

                    cout<<setiosflags (ios::left)<<"| "<<setw (31)<<mk[i].matkul;
                    cout<<setiosflags (ios::left)<<"|   "<<setw (5)<<mk[i].tgs;
                    cout<<setiosflags (ios::left)<<"|   "<<setw (4)<<mk[i].uts;
                    cout<<setiosflags (ios::left)<<"|    "<<setw (7)<< mk[i].project;
                    cout<<setiosflags (ios::left)<<"|   "<<setw (4)<<mk[i].uas;
                    cout<<setiosflags (ios::left)<<"|   "<<setw (2)<<mk[i].grade << "   |" << endl;
            }
            cout << "--------------------------------------------------------------------------------\n";
            cout << endl << "Tekan apapun untuk kembali ke Beranda" << endl;
            system("pause");
            system("cls");
            goto menu1;
}

    if (pil==3){
        cout << "Anda Telah Logout";



    }return 0;

    menu2:
    mhs();

    system("cls");
    if (pil==1){
        cout << "Daftar Hadir Mahasiswa" << endl;
        cout << "======================" << endl;
        cout << "1. Hadir" << endl;
        cout << "2. Sakit" << endl;
        cout << "3. Izin" << endl;
        cout << "======================" << endl;
        cin >> oper;

        switch (oper) {
            case '1':
            cout << "Keren kamu masuk" << endl;
            cout << "Tekan apapun untuk kembali ke Beranda" << endl;
            break;
            case '2':
            cout << "Mana surat Izin nya!" << endl;
            cout << "Tekan apapun untuk kembali ke Beranda" << endl;
            break;
            case '3':
            cout << "hayoo izin kemana" << endl;
            cout << "Tekan apapun untuk kembali ke Beranda" << endl;
            break;
        }system("pause");
         system("cls");
         goto menu2;
        }
    if (pil==2){
        cout << "Anda Telah Logout";

    }return 0;
}
