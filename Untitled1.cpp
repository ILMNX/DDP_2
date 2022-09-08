#include <iostream>

using namespace std;
int main (){
	
	string akt;
	string jrsn;
	
	cout<<"|Masukkan Angkatan| :";
	cin>>akt;
	
	cin.ignore();
	
	cout<<"|Masukkan jurusan| :";
	getline(cin, jrsn); 
	
	
	cout<<"Angkatan kamu adalah "<<akt<<"\nJurusan kamu adalah "<<jrsn;
	return 0;
}
