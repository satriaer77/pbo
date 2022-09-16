#include <iostream>
#include <string>
#include "Khs.h"

using namespace std;

class Student
{
    private :
        string studentId;
        string studentName, studentAddress;
        int semester;
        //Khs *studentReport = new Khs();
    
    
    public :
        Student(string sId = "210411100000", string name = "default", string address = "default", int semester = 1)
        {
            this->studentId      = sId;
            this->studentName    = name;
            this->studentAddress = address;
            this->semester       = semester;
          //  this->studentReport  = report;
        }



        void setDataId(char mthd, string sId = "210411100000")
        {
            string inputStudentId;

            if(mthd == 'i')
            {
                cout<< "Input ID Mahasiswa : ";
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
                cout<< "Input Nama Mahasiswa : ";
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
                cout<< "Input Alamat Mahasiswa : ";
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
                cout<< "Input Semester Mahasiswa : ";
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
            this->setDataName('i');
            this->setDataAddress('i');
            this->setDataSemester('i');
        }
      
        void printStudentData()
        {
            cout<<"+--------+---------+\n";
            cout<<"|   Data Mahaiswa  |\n";
            cout<<"+------------------+\n";
            cout<<"Nama Mahasiswa   : "<<this->getDataName()<<"\n";
            cout<<"Alamat Mahasiswa : "<<this->getDataAddress()<<"\n";
            cout<<"Semester         : "<<this->getDataSemester()<<"\n";
            cout<<"+------------------+\n\n";
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
