#include<vector>
#include<fstream>
using namespace std;

class files{
	public:
		ifstream wejscie;
		vector <int> zbior;
	files();
	~files();
	bool wczytaj();
};
