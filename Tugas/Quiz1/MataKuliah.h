#include <iostream>
#include <string>

using namespace std;

class MataKuliah
{

    private :
        string kodeMataKuliah, namaMataKuliah;
        int mataKuliahSks, semester;

    public :
        MataKuliah(string namaMatkul="default",int sks=2, int semester=1)
        {
            this->namaMataKuliah = namaMatkul;
            this->mataKuliahSks  = sks;
            this->semester       = semester;
        }


        void setDatakodeMataKuliah(char mthd='i', string kodeMatkul="M-00001")
        {
            string inputKodeMataKuliah;

            if(mthd == 'i')
            {
                cout<< "=>Input Kode MataKuliah : ";
                getline(cin >> ws,inputKodeMataKuliah);   
            }
            else
            {
                inputKodeMataKuliah = kodeMatkul;
            }
            this->kodeMataKuliah = inputKodeMataKuliah;
        }

        void setDataNamaMataKuliah(char mthd='i',string namaMatkul="default")
        {
            string inputNamaMataKuliah;

            if(mthd == 'i')
            {
                cout<< "=>Input Nama Mata Kuliah : ";
                getline(cin >> ws,inputNamaMataKuliah);   
            }
            else
            {
                inputNamaMataKuliah = namaMatkul;
            }
            this->namaMataKuliah = inputNamaMataKuliah;

        }

        void setDataSks(char mthd,int sks=2)
        {
            int inputSks;

            if(mthd == 'i')
            {
                cout<< "=>Input SKS Mata Kuliah : ";
                cin >> inputSks;   
            }
            else
            {
                inputSks = sks;
            }
            this->mataKuliahSks = inputSks;

        }

        void setDataSemester(char mthd,int semester=1)
        {
            int inputSemester;

            if(mthd == 'i')
            {
                cout<< "=>Input Semester Mata Kuliah : ";
                cin >> inputSemester;   
            }
            else
            {
                inputSemester = semester;
            }
            this->semester = inputSemester;

        }

        void setDataAll()
        {
            this->setDatakodeMataKuliah('i');
            this->setDataNamaMataKuliah('i');
            this->setDataSks('i');
            this->setDataSemester('i');
        }

        void printMataKuliah()
        {
            cout<<"Data MataKuliah\n";
            cout<<"+---------------------------------------+\n";
            cout<<"Kode Mata Kuliah   : "<<this->getDataKodeMataKuliah()<<"\n";
            cout<<"Nama Mata Kuliah   : "<<this->getDataNamaMataKuliah()<<"\n";
            cout<<"SKS                : "<<this->getDataSks()<<"\n";
            cout<<"Semester           : "<<this->getDataSemester()<<"\n";
            cout<<"+---------------------------------------+\n\n";
        }

        string getDataKodeMataKuliah()
        {
            return this->kodeMataKuliah;
        }

        string getDataNamaMataKuliah()
        {
            return this->namaMataKuliah;
        }
        int getDataSks()
        {
            return this->mataKuliahSks;
        }
        int getDataSemester()
        {
            return this->semester;
        }
};
