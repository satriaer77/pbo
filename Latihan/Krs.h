#include <iostream>
#include <string>

using namespace std;
// setStudent(student *s)
// {
//students[counter] = s;
//counter++;
}
class Krs
{

    private :
        string idMataKuliah, idMahasiswa, idKrs;

        Krs(string idMatkul ="M-0000", idMhs = "2101110000",string idKrs = "K-00001")
        {
            this->idMataKuliah = idMatkul;
            this->idMahasiswa  = idMhs;
            this->idKrs        = idKrs;
        }
        
        string getDataIdMatkul()
        {
            return this->idMataKuliah;
        }
        string getDataIdMahasiswa()
        {
            return this->idMahasiswa;
        }
        string getDataKrs()
        {
            return this->idKrs;
        }
        

}
