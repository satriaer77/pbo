#include <iostream>
#include <string>
#include "MataKuliah.h"

using namespace std;

class Khs
{
    private :
        string studentId, kodeMataKuliah;
        int nilai;


    public :
        Khs(string sId="210411100000", string kodeMataKuliah="M-00001",int nilai=1)
        {
            this->studentId      = sId;   
            this->kodeMataKuliah = kodeMataKuliah;
            this->nilai          = nilai;
        }

        void setDataStudentId(char mthd = 'i', string sId = "210411100000")
        {
            string inputStudentId;

            if(mthd == 'i')
            {
                cout<< "=>Input NIM Mahasiswa : ";
                getline(cin >> ws,inputStudentId);   
            }
            else
            {
                inputStudentId = sId;
            }
            this->studentId = inputStudentId;
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

        void setDataNilai(char mthd='i', int nilai=1)
        {
            int inputNilai;

            if(mthd == 'i')
            {
                cout<< "=>Input Nilai Mata Kuliah : ";
                cin >> inputNilai;   
            }
            else
            {
                inputNilai = nilai;
            }
            this->nilai = inputNilai;
        }

        void setDataAll()
        {
            this->setDataStudentId('i');
            this->setDatakodeMataKuliah('i');
            this->setDataNilai('i');
        }


        string getDataId()
        {
            return this->studentId;
        }

        string getDataKodeMataKuliah()
        {
            return this->kodeMataKuliah;
        }

        int getDataNilai()
        {
            return this->nilai;
        }
        

        
};
