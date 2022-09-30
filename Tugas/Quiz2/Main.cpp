#include <iostream>
#include <string>
#include <list>
#include <iterator>

#include "Prodi.h"

using namespace std;

int main(int argc, char *argv[])
{
    Prodi progamStudi;
    Student mhs; //For passing object
    MataKuliah matkul;//for passing object
    list<MataKuliah> daftarMataKuliah;

    bool stop = false;

    while(!stop)
    {
        int role;
        cout<<"== Pilih Role Anda ==\n"
              "| 1. Admin          |\n"
              "| 2. Mahasiswa      |\n"
              "| 3. Keluar Program |\n"
              "=====================\n"
              "\n -> Pilih role anda : ";

        cin >> role;

        switch(role) 
        {
            case 1 :
            {
                bool stopProgramAdmin = false;
                while(!stopProgramAdmin)
                {
                    if(progamStudi.getDataNama() == "default")
                    {
                        cout<<"\n!! Karena prodi belum dibuat maka inisialisai prodi terlebih dahulu\n";
                        cout<<"Buat Prodi\n";
                        progamStudi.setDataAll();
                    }
                    else
                    {
                        int menu;
                        string inputKodeMatkul;
                        typedef list<MataKuliah>::iterator matkulIt;
                        cout<<"\n\n========== Menu ==========\n"
                              "| 1. Tambah Mahasiswa    |\n"
                              "| 2. Tambah Mata Kuliah  |\n"
                              "| 3. Edit Prodi          |\n"
                              "| 4. Edit Mata Kuliah    |\n"
                              "| 5. Tampilkan Mahasiswa |\n"
                              "| 6. Tampilkan Matkul    |\n"
                              "| 7. Delete Mahasiswa    |\n"
                              "| 8. Logout              |\n"
                              "==========================\n"
                              "\n -> Pilih Menu : ";
                        cin >> menu;
                        switch(menu)
                        {
                            case 1:
                                progamStudi.addStudent(mhs);
                                break;
                            case 2:
                                matkul.setDataAll();
                                daftarMataKuliah.insert(daftarMataKuliah.begin(), matkul);
                                break;
                            case 3:
                            
                                progamStudi.setDataAll();
                                break;
                                
                            case 4:
                                cout<<"\n=> Masukkan Kode Mata Kuliah : ";
                                getline(cin >> ws,inputKodeMatkul); 

                                for(matkulIt i=daftarMataKuliah.begin();i != daftarMataKuliah.end();++i)
                                {
                                    if(i->getDataKodeMataKuliah() == inputKodeMatkul)
                                    {
                                        i->printMataKuliah();
                                    }
                                    else
                                    {
                                        cout<<"!! Kode Mata Kuliah Tidak Ditemukan";
                                    }
                                }
                                break;

                            case 5:
                                {
                                    progamStudi.displayStudents();
                                }
                                break;

                            case 6:
                                
                                cout<<"\n--- Daftar MataKuliah ---\n";
                                for(matkulIt i=daftarMataKuliah.begin();i != daftarMataKuliah.end();++i)
                                {
                                    
                                    i->printMataKuliah();    
                                }
                                break;
                            case 7 :
                            {
                                string studentId;
                                bool founded = false;
                                cout<<"\n=> Ketikkan NIM anda : ";
                                getline(cin >> ws,studentId);
                                founded = progamStudi.deleteStudent(studentId);
                                if(founded == true)
                                {
                                    cout<<"Data berhasil di hapus";
                                }
                                else 
                                {
                                    cout<<"!Data gagal dihapus silahkan cek kembali inputan NIM!";
                                }
                            }
                            case 8:
                                stopProgramAdmin = true;
                                break;
                            default :
                                cout<<"!!Menu yang anda pilih tidak ada di daftar!!, silahkan pilih kembali\n";
                                break;

                        }

                    }
                }
                
                break;
            }

            case 2 :
            {
                int menu;
                string studentId;
                bool stopCariMahasiswa = false;
                bool founded           = false;

                cout<<"\n=> Ketikkan NIM anda : ";
                getline(cin >> ws,studentId);
                founded = progamStudi.searchStudent(studentId);

                if(founded)
                {
                    bool stopProgramMahasiswa = false;
                    while(!stopProgramMahasiswa)
                    {
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
                                progamStudi.editStudent(studentId);
                                break;

                            case 2:
                                progamStudi.addStudentKhs(studentId);
                                break;
                            case 3:
                                progamStudi.getKhs(studentId);
                                break;
                            
                            case 4:
                                stopProgramMahasiswa = true;
                                break;
                            default:
                                cout<<"\n\n!!Menu yang anda pilih tidak ada di daftar!!, silahkan pilih kembali\n";
                                break;

                        }
                    }                    
                }
                else
                {
                    cout<<"\n!! NIM yang anda cari tidak ditemukan\n";
                    
                }
                
                break;
            }
            case 3 :
                stop = true;
                break;

            default:
                cout<<"\n!!Role/Menu yang anda pilih tidak ada di daftar!!, silahkan pilih kembali\n";
                break;
        }
    
    }

    return 0;
}
