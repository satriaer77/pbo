#include <iostream>
#include <string>
#include <list>
#include <iterator>

#include "Khs.h"

using namespace std;

class Student
{
    private :
        string studentId;
        string studentName, studentAddress;
        int semester;
        list<Khs> studentReports;
    
    
    public :
        Student(string sId = "210411100000", string name = "default", string address = "default", int semester = 1, Khs report = {"210411100000","M-00001",1})
        {
            this->studentId      = sId;
            this->studentName    = name;
            this->studentAddress = address;
            this->semester       = semester;
            //this->studentReports.insert(this->mahasiswa.begin(),report);
        }



        void setDataId(char mthd, string sId ="210411100000")
        {
            string inputStudentId;

            if(mthd == 'i')
            {
                cout<< "=>Input ID Mahasiswa : ";
                getline(cin >> ws,inputStudentId);   
            }
            else
            {
                inputStudentId = sId;
            }
            this->studentId = inputStudentId;
        }


        void setDataName(char mthd, string name = "default")
        {
            string inputName;

            if(mthd == 'i')
            {
                cout<< "=>Input Nama Mahasiswa : ";
                getline(cin >> ws,inputName);   
            }
            else
            {
                inputName = name;
            }
            this->studentName = inputName;
        }

        void setDataAddress(char mthd, string address = "default")
        {
            string inputAddress;

            if(mthd == 'i')
            {
                cout<< "=>Input Alamat Mahasiswa : ";
                getline(cin >> ws,inputAddress);   
            }
            else
            {
                inputAddress = address;
            }
            this->studentAddress = inputAddress;
        }
        
        void setDataSemester(char mthd, int semester = 1)
        {
            int inputSemester;

            if(mthd == 'i')
            {
                cout<< "=>Input Semester Mahasiswa : ";
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
            this->setDataId('i');
            this->setDataName('i');
            this->setDataAddress('i');
            this->setDataSemester('i');
        }

        void addDataKhs(char mthd ='i', Khs studentReport={"210411100000","M-00001",1},string kodeMatkul="M-00001")
        {
            string inputKodeMataKuliah;

            if(mthd == 'i')
            {
                cout<< "=>Input Kode Mata Kuliah : ";
                getline(cin >> ws,inputKodeMataKuliah);   
            }
            else
            {
                inputKodeMataKuliah = kodeMatkul;
            }

            studentReport.setDatakodeMataKuliah('d',inputKodeMataKuliah);
            studentReport.setDataStudentId('d', this->studentId);
            studentReport.setDataNilai('i');
            this->studentReports.insert(this->studentReports.begin(), studentReport);
        }
      
        void printStudentData()
        {
            cout<<"+-------------+--------------+\n";
            cout<<"|        Data Mahaiswa       |\n";
            cout<<"+-------------+--------------+\n";
            cout<<"NIM              : "<<this->getDataId()<<"\n";
            cout<<"Nama Mahasiswa   : "<<this->getDataName()<<"\n";
            cout<<"Alamat Mahasiswa : "<<this->getDataAddress()<<"\n";
            cout<<"Semester         : "<<this->getDataSemester()<<"\n";
            cout<<"+----------------------------+\n\n";
        }

        void printDataKhs(string idKeyword)
        {
            cout<<"|-> Data KHS \n";
            typedef list<Khs>::iterator khsIt;
            for(khsIt i=this->studentReports.begin();i != this->studentReports.end();++i)
            {
                if(idKeyword == i->getDataId())
                {
                    cout<<"+-------------+\n";
                    cout<<"Kode Matkul : "<<i->getDataKodeMataKuliah()<<"\n";
                    cout<<"Nilai       : "<<i->getDataNilai()<<"\n";
                    cout<<"+-------------+\n";

                }
            }
            

        }
        
        string getDataId()
        {
            return this->studentId;
        }
        string getDataName()
        {
            return this->studentName;
        }
        string getDataAddress()
        {
            return this->studentAddress;
        }
        int getDataSemester()
        {
            return this->semester;
        }
   };
