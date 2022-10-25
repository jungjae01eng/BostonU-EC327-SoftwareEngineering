#include "readfile.h"
#include <iostream>
#include <fstream>

using namespace std;

void readFiletoArray(const char* filename, int* data){
	// Reads the data stored in the "filename" into an integer array, int data[].
	ifstream f;
	f.open(filename);

	//int data;
	//int *p = input;

	int i = 0;
	while(true)
	{
		f.open(filename);
		f >> data[i];
		if (f.eof())
			break;
	}

return;
}

int main()
{

}
