#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include "Mahasiswa.h"

using namespace std;

int main()
{
    int jml;
    bool stop    = false;
    int nowIndex = 0; 
    int maxIndex = 10;

    Mahasiswa daftarMhs[maxIndex];

    Mahasiswa mhs;

    list<Mahasiswa> lstMhs;
    
    typedef list<Mahasiswa>::iterator mhsIt;
    //MataKuliah *matkul = new Matkul();
    


    while(!stop)
    {
        int yourChoice;
        cout<<"\n+-------------+\n";
        cout<<"| Daftar Menu |\n";
        cout<<"+-------------+-------------+\n";
        cout<<"| 1. Tambah Mahasiswa       |\n";
        cout<<"| 2. Lihat Daftar Mahasiswa |\n";
        cout<<"| 3. Hapus Mahasiswa        |\n";
        cout<<"| 4. Edit Data Mahasiswa    |\n";
        cout<<"| 5. Hentikan Program       |\n";
        cout<<"+---------------------------+\n\n";
        cout<<"-> Pilih Daftar Menu : ";
        cin >> yourChoice;
        string searchNim;
        bool founded = false;
        int dumIdx   = 0;

        switch(yourChoice) {
            case 1:
                mhs.setAllData();
                lstMhs.insert(lstMhs.begin(),mhs);
                //listMhs[nowIndex].setAllData();
                //nowIndex++;
                break;
            case 2:
                //it = dataSet.begin();

                for(mhsIt i=lstMhs.begin();i != lstMhs.end();++i)
                {
                    //++lstMhs;
                    //*lstMhs.getDataMahasiswa();
                    i->getDataMahasiswa();
                }
                break;
            case 3:
                cout<<"Hapus Mahasiswa";
                break;
            case 4:
            
                cout<<"-> Cari NIM Mahasiswa :";
                cin >> searchNim;

                while(!founded)
                {
                    if(searchNim == daftarMhs[dumIdx].getDataNim())
                    {
                        founded = true; 
                        cout<<"founded "<<searchNim;
                        //daftarMhs[dumIdx].chooseMataKuliah();

                    }
                    else
                    {                    
                        dumIdx++;

                        if(dumIdx > 10)
                        {
                            founded = true;
                        }
                    }

                }
                cout<<"Edit Data Mahasiswa";
                break;
            case 5:
                stop = true;
                break;

            default:
                cout<<"Menu yang anda pilih tidak ada di daftar! silahkan coba lagi";
            
        }
        
    }

    return 0;
}
