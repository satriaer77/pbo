#include <iostream>
#include <string>
#include "MataKuliah.h"

using namespace std;


class Mahasiswa
{
    private :
        string namaMahasiswa;
        string nim;
        int umurMahasiswa;
        string kotaAsal;
        MataKuliah matakuliah;

    public : 
        Mahasiswa(string namaMhs="default", string nimMhs="210411100000", int umurMhs=0, string asalMhs="default")
        {
            this->namaMahasiswa = namaMhs;
            this->nim           = nimMhs;
            this->umurMahasiswa = umurMhs;
            this->kotaAsal      = asalMhs;
        }
        
        void getDataMahasiswa()
        {
            if(this->getDataNama() != "default")
            {
                
                cout<<"+---------------------------+\n";
                cout<<"|       Data Mahasiswa      |\n";
                cout<<"+---------------------------+\n\n";
                
                cout<<"Nama     : "<<this->getDataNama()<<"\n";
                cout<<"NIM      : "<<this->getDataNim()<<"\n";
                cout<<"Umur     : "<<this->getDataUmur()<<"\n";
                cout<<"Kota Asal: "<<this->getDataKota()<<"\n\n\n\n";
                cout<<"Mata Kuliah : ";
                matakuliah.printMataKuliah();
        
            }
        }
        
        void setDataNama(char mthd, string nama="default") //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            string inputNama;

            if(mthd == 'i')
            {
                cout<<"\n==> Input Nama Mahasiswa : ";
                getline(cin >> ws,inputNama);
            }
            else
            {   
                inputNama = nama;
            }
            this->namaMahasiswa = inputNama;
        }
 

        void setDataNim(char mthd, string nim="210411100000") //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            string inputNim;

            if(mthd == 'i')
            {
                cout<<"==> Input NIM Mahasiswa : ";
                getline(cin >> ws,inputNim);
            }            
            else
            {
                inputNim = nim;
            }
            this->nim = inputNim;
        }

        void setDataUmur(char mthd, int umur=0) //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            int inputUmur;

            if(mthd == 'i')
            {
                cout<<"==> Input Umur Mahasiswa : ";
                cin >> inputUmur;
            }            
            else
            {
                inputUmur = umur;
            }
            this->umurMahasiswa = inputUmur;
        }
        
        void setDataKota(char mthd, string kota="default") //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            string inputKota;

            if(mthd == 'i')
            {
                cout<<"==> Input Asal Kota Mahasiswa : ";
                getline(cin >> ws,inputKota);
            }            
            else
            {
                inputKota = kota;
            }
            this->kotaAsal = inputKota;
        }

        void chooseMataKuliah(MataKuliah matakuliah)
        {
            matakuliah.setAllMataKuliahData();
            matakuliah.printMataKuliah();
        }

        void setAllData()
        {
            this->setDataNama('i');
            this->setDataNim('i');
            this->setDataUmur('i');
            this->setDataKota('i');
        }

        string getDataNama()
        {
            return this->namaMahasiswa;
        }
        
        string getDataNim()
        {
            return this->nim;
        }

        int getDataUmur()
        {
            return this->umurMahasiswa;
        }
        
        string getDataKota()
        {
            return this->kotaAsal;
        }


        /*void setMatkul(MataKuliah matkul)
        {
            matkul[idx]  = matkul;
            this->matkul[idx] = matkul[idx]; 
            idx++;
        }*/
        
        
};
