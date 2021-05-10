#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

class file
{
        ifstream inFile;
        int a,b,c;
       
        public:
                file();
                ~file();
                void loop(); 
                bool pitagoras();
                bool prostokatny();
};


file::file()
{
        inFile.open("trojki.txt"); 
        if (!inFile.good())
        {
                cerr << "Blad - pliku nie da sie otworzyc!\n";
                exit(1);
        }
}

file::~file()
{
        inFile.close();
}


void file::loop()
{
        while (!inFile.eof()) 
        {
                inFile >> a >> b >> c;
        }
}
bool file::pitagoras() {
	if(((a*a+b*b)==c*c)||((a*a+c*c)==b*b)||((c*c+b*b)==a*a))  {
		return (((a*a+b*b)==c*c)||((a*a+c*c)==b*b)||((c*c+b*b)==a*a)); 
	}
}

bool file::prostokatny() {
	if(a*b == c) {
		return true;
	}
	if(b*c == a) {
		return true;
	}
	if(a*c == b) {
		return true;
	}
}
int main()
{
        file f;
        f.loop();
        f.pitagoras();
        f.prostokatny();
        return 0;
}
