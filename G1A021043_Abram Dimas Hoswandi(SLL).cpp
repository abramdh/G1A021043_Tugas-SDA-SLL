#include <iostream>

using namespace std;

//komponen
struct DataMahasiswa{
 string Nama, NPM, Tempat_Lahir;
 DataMahasiswa *next;

};
int main (){

   DataMahasiswa*node1, *node2, *node3;

    node1 = new DataMahasiswa();
    node2 = new DataMahasiswa();
    node3 = new DataMahasiswa();
    
    node1->Nama = "Abram";
    node1->NPM = "G1A021043";
    node1->Tempat_Lahir = "Bengkulu";
    node1->next = node2;

    node2->Nama = "Nehemia";
    node2->NPM = "G1A021043";
    node2->Tempat_Lahir = "Bengkulu";
    node2->next = node3;

    node3->Nama = "Kiranti";
    node3->NPM = "G1A021100";
    node3->Tempat_Lahir = "Jakarta";
    node3->next = NULL;

    DataMahasiswa*cur;
    cur = node1;
    while( cur != NULL ) {
        cout << "Nama Mahasiswa:" << cur->Nama << endl;
        cout << " NPM Mahasiswa:" << cur->NPM << endl;
        cout << " Tempat Lahir:" << cur->Tempat_Lahir << endl;

        cur = cur->next;

    }


}
