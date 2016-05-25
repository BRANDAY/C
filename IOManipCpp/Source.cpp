#include <iostream>
#include <fstream>

using namespace std;

bool is_open();
bool eof();

/*ostream &setup(ostream &stream)
{
	stream.width(10);
	stream.precision(1);
	stream.fill('#');

	return stream;
}
*/
int main()
{
	char c;

	ofstream fout("oText");

	if (!fout){
		cout << "Error Open";
		return 1;
	}
	fout << "Yes\n";
	fout << 100 << ' ' << hex << 100 << endl;

	fout.close();



	ifstream fin("oText");

	if (!fin){
		cout << "Error Open";
		return 1;
	}

	char str[80];
	int i;

	fin >> str >> i;
	cout << str << ' ' << i << endl;
	fin.close();

/*	while (io.eof()){

		io >> i;
		cout << "YES~!!!";
		io.close();		
	}
	
	//cout << "I inside!";

	//cout << setup << 123.123456;
*/
	system("PAUSE");
	return 0;
}