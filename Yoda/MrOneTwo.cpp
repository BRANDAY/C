#include "MrOneTwo.hpp"

void LoadFile(istream &infile)
{

}
void SaveFile(ofstream &outfile)
{

}
vector<int> MrOneTwo::ParseTableRow(const int &line)
{
	return ;
}

int main(int argc, char *const argv[])
{
	typedef vector<int> iv1;
	typedef vector<iv1> iv1D;

	iv1 matrix;
	for (int ii = 0; ii < 10; ii++){
		matrix.push_back(ii);
	}

	vector<int> iv;
	int i;

	cout << iv.size() << endl;

	for (i = 0; i < 10; i++){
		iv.push_back(i);
	}

	cout << iv.size() << endl;
	
	for (i = 0; i < iv.size(); i++){
		cout << iv[i] << " ";		 
	}

	cout << endl;

	vector<int>::iterator p = iv.begin();
	while (p != iv.end()){
		cout << *p << " ";
		p++;
	}

	system("PAUSE");
	return 0;
}