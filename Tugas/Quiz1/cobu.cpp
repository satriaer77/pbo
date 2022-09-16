#include <iostream>
#include <string>
#include <list>
#include <iterator>


#include "Prodi.h"
#include "MataKuliah.h"



using namespace std;

int main()
{
    Prodi prod;
    Student mhs;
    list<MataKuliah> daftarMataKuliah;

    prod.setDataKode('i');
    prod.setDataNama('i');

    prod.addStudent(mhs);
    prod.addStudent(mhs);
    prod.displayStudents();

    return 0;
}