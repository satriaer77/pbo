#include <iostream>
#include <string>

class MataKuliah
{

    private :
        string namaMataKuliah;
        int mataKuliahSks;

    public :
        MataKuliah(string namaMatkul = "default",int sks=2)
        {
            this->namaMatakuliah = namaMatkul;
            this->mataKuliahSks  = sks;
        }

        void setDataNamaMataKuliah(char mthd,string namaMatkul = "default")
        {
            int inputNamaMataKuliah;

            if(mthd == 'i')
            {
                cout<< "Input Nama Mata Kuliah : ";
                cin >> inputNamaMataKuliah;   
            }
            else
            {
                inputNamaMataKuliah = namaMatkul;
            }
            this->namaMataKuliah = inputNamaMataKuliah;

        }
}
