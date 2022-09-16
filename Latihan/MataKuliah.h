#include <iostream>
using namespace std;

/*
 * Nilai Range
 * <50   = E  (1)
 * 50-55 = D  (1.5)
 * 55-60 = C  (2)
 * 60-65 = C+ (2.5)
 * 65-75 = B  (3)
 * 75-80 = B+ (3.5)
 * 85-90 = A  (4)
 *
 *
 * Rumus IP
 * jml nilai permatakuliah(SKS x Konversi Nilai Range)/jmlmata kuliah
 *
 * ex :
 * nilai 85 sks =4
 * 
 * 
 * */
class MataKuliah
{
    private :
        string mataKuliah;
        float nilai;
        int sks;

    public : 
        MataKuliah(string matkul="default", float nilai = 1.0, int sks=1)
        {
            this->mataKuliah = matkul;
            this->nilai      = nilai;
            this->sks        = sks;
            
        }
        void printMataKuliah()
        {
            cout<<"== Mata Kuliah ==\n  ";
            cout<<"+------+-----+---+\n";
            cout<<"|Matkul|Nilai|Sks|\n";
            cout<<"+------+-----+---+\n";
            cout<<"|"<<this->mataKuliah<<"|"<<this->nilai<<"|"<<this->sks<<"|\n";
            cout<<"+------+-----+---+\n\n";
        }

        
        void setDataNamaMataKuliah(char mthd, string matkul="default") //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            string inputMataKuliah;

            if(mthd == 'i')
            {
                cout<<"\n==> Input Nama MataKuliah : ";
                getline(cin >> ws,inputMataKuliah);
            }
            else
            {   
                inputMataKuliah = matkul;
            }
            this->mataKuliah = inputMataKuliah;
        }
         
        void setDataNilai(char mthd, float nilai=1.0) //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            float inputNilai;

            if(mthd == 'i')
            {
                cout<<"\n==> Input Nilai MataKuliah : ";
                cin >> inputNilai;
            }
            else
            {   
                inputNilai = nilai;
            }
            this->nilai = inputNilai;
        }
        
        void setDataSks(char mthd, int sks =1) //mthd has 2 value i for user input and else i for inputing data from parameter
        {
            int inputSks;

            if(mthd == 'i')
            {
                cout<<"\n==> Input SKS MataKuliah : ";
                cin >> inputSks;
            }
            else
            {   
                inputSks = sks;
            }
            this->sks = inputSks;

        }

        void setAllMataKuliahData()
        {
            this->setDataNamaMataKuliah('i');
            this->setDataNilai('i');
            this->setDataSks('i');
        }


        string getDataNamaMataKuliah()
        {
            return this->mataKuliah;   
        }
        float getDataNilai()
        {
            return this->nilai;
        }
        int getDataSks()
        {
            return this->sks;
        }


        
};
