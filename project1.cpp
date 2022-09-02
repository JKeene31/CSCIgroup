#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
string line;
//string spl;

cout << "Hello There!" << endl;

ifstream myfile;

myfile.open("/home/turing/mhou/csci652/data/human.chr22.chimp.maf");

if (myfile.is_open()){
	while (!myfile.eof()){
		getline(myfile, line);
		if (line[0] == 's'){
			int i = 0;
			while (line[i] != '+' && line[i] != '-')
				i++;
			while (!isalpha(line[i]))
				i++;
			int len = line.length();
			while (i < len){
				cout << line[i];
				i++;
			}
			cout << endl << line << endl;
		}
	}
}

myfile.close();

return 0;
}
