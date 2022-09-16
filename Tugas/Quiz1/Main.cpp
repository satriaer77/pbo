#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main(int argc, char *argv[])
{
    //int j;
    int studentTotal = 5;
    Student *listStudents = new Student[studentTotal]; 
    
    for(int i=0;i < 3;i++)
    {
        listStudents->setDataAll();
        listStudents++;
    }

    cout<<"\n\n --Daftar Maasiswa --\n";
    for(int i=0;i < studentTotal;i++)
    {
        listStudents->printStudentData();
        listStudents++;
    }
    

    bool stop = false;

    while(!stop)
    {
        int role;
        cout<<"== Pilih Role Anda ==\n"
              "| 1. Admin          |\n"
              "| 2. Mahasiswa      |\n"
              "=====================\n"
              "\n -> Pilih role anda : ";

        cin >> role;

        switch(role) 
        {
            case 1 :
                int menu;
                cout<<"\n\n========== Menu ==========\n"
                      "| 1. Tambah Mahasiswa    |\n"
                      "| 2. Tambah Mata Kuliah  |\n"
                      "| 3. Tambah Prodi        |\n"
                      "| 4. Edit Mata Kuliah    |\n"
                      "| 5. Edit Prodi          |\n"
                      "| 6. Tampilkan Mahasiswa |\n"
                      "| 7. Tampilkan Matkul    |\n"
                      "| 8. Tampilkan Prodi     |\n"
                      "| 9. Logout              |\n"
                      "==========================\n"
                      "\n -> Pilih Menu : ";
                cin >> menu;
                switch(menu)
                {
                    case 1:
                        break;
                }
                break;
            
            case 2 :
                int menu;
                string studentId;
                bool founded = false;
                cout<<"=> Ketikkan NIM anda : ";
                getline(cin >> ws,studentId);
                
                while(!founded)
                {
                    
                }

                cout<<"===== Menu Mahasiswa =====\n"
                      "|  1. Edit Profile       |\n"
                      "|  2. Pilih Mata Kuliah  |\n"
                      "|  3. Tampilkan KHS      |\n"
                      "|  4. Logout             |\n"
                      "==========================\n"
                      "\n -> Pilih Menu : ";
                cin >> menu;
                switch(menu)
                {
                    case 1:
                        break;
                    case 2:
                        break;

                    default:

                }
            
            default:
        }
    
    }

    return 0;
}
