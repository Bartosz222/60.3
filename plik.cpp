
#include <iostream>
#include <plik.h>

using namespace std;
files::files(){
	wejscie.open("liczby.txt");
}
files::~files(){
	wejscie.close();
}
bool files::wczytaj(){
	int liczba;
	if(wejscie.good()){
		while(!wejscie.eof()){
			wejscie>>liczba;
			zbior.push_back(liczba);
		}
		return true;
	}
	else{
		cout<<"Blad";
		return false;
	}
}
void files::pokaz(){
	for(int i =0;i<=zbior.size();i++){
		cout<<zbior[i]<<endl;
	}
}
