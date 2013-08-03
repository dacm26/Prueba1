#include <iostream>
#include <fstream>
using namespace std;

struct Data{
	char name[11];
	double value;
	int index;
	friend istream& operator>>(istream&, Data&);
};

istream& operator>>(istream& in, Data& data){
	in >> data.name >> data.value >> data.index;
	return in;
}

union chardouble{
	char raw[sizeof(double)];
	double num;
};

union charint{
	char raw[sizeof(int)];
	int num;
};

int main(int argc, char* argv[]){
	/*ifstream in("file.bin", ios::in|ios::binary);
	Data data;
	chardouble cd;
	charint ci;
	char buffer[22];
	while(true){
		if (!reinterpret_cast<char*>(&data),sizeof(data))
		{
			break;
		}
		in.read();
	}
	while (in.good()){

		cout << data.name << endl << data.value << endl << data.index << endl << endl;
		
	}
	in.close();
	*/
	/*
	ofstream out("file.bin", ios::out|ios::binary);
	Data data;
	while (cin >> data){
		out.write(data.name, 10);
		out.write(reinterpret_cast<char*>(&data.value), sizeof(double));
		out.write(reinterpret_cast<char*>(&data.index), sizeof(int));
	}
	out.close();
	*/
	return 0;
}
