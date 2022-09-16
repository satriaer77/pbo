#include <iostream>
#include <list>
#include <iterator>


using namespace std;
#include "Mahasiswa.h"

class Prodi 
{
    private :
        string namaProdi,kodeProdi;
        list<Student> mahasiswa;
        typedef list<Student>::iterator mhsIt;


    public :
        Prodi(sting nama = "default" , string kode = "P-000", Student mhs)
        {
            this->namaProdi = nama;
            this->kodeProdi = kode;
            this->mahasiswa.insert(this->mahasiswa.begin(),mhs);
        }

        void setDataNama(char mthd = 'i', string nama="default")
        {
            string inputNamaProdi;

            if(mthd == 'i')
            {
                cout<< "Input Nama Prodi : ";
                getline(cin >> ws,inputNamaProdi);   
            }
            else
            {
                inputNamaProdi = nama;
            }
            this->namaProdi = inputNamaProdi;
        }

        void setDataKode(char mthd = 'i', string kode="P-000")
        {
            string inputKodeProdi;

            if(mthd == 'i')
            {
                cout<< "Input Kode Prodi : ";
                getline(cin >> ws,inputKodeProdi);   
            }
            else
            {
                inputKodeProdi = kode;
            }
            this->kodeProdi = inputKodeProdi;
        }

        void addStudent(Student mhs)
        {
            for(this->mhsIt i=this->mahasiswa.begin();i != this->mahasiswa.end();++i)
                {
                    if(i->getDataNama() == "Jaka")
                    {
                        this->mahasiswa.insert(this->mahasiswa.begin(),mhs.setAllData());
                    }
                }
        }

}