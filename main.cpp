#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class files{
	public:
		ifstream wejscie;
		vector <int> zbior;
		vector <int> wynik;
	files();
	~files();
	bool wczytaj();
};
class numbers:public files{
	public:
		int NWD(int a,int b);
		void petla();
		void liczby();
		void maks();
};
void numbers::petla(){
	int w;
	for(int i=0;i<=zbior.size();i++){
		for(int j=0;j<=zbior.size();j++){
			NWD(zbior[i],zbior[j]);
			if(NWD(zbior[i],zbior[j]) == 1){
				wynik.push_back(zbior[i]);
			}
		}
	}
}
void numbers::maks(){
	int max;
	for(int i=0;i<=wynik.size();i++)
		if(max>wynik[i])max = wynik[i];
		
	cout<<max;
}
int numbers::NWD(int a,int b){
	if (a < b)
    	return NWD(b, a);
    if (b == 0)
        return a;
    return NWD(b, a%b);
}
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


int main() {
	files f1;
	numbers n1;
	f1.wczytaj();
	n1.petla();
	n1.liczby();
	n1.maks();
	return 0;
}
