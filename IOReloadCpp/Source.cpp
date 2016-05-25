#include <iostream>
#include <fstream>

using namespace std;

class coord{
	int x, y;
public:
	coord(int i, int j){ x = i; y = j; }
	friend ostream &operator << (ostream &stream, coord ob);
	friend istream &operator >> (istream &stream, coord &ob);
};

ostream &operator << (ostream &stream, coord ob){
	stream << ob.x << ' ' << ob.y << endl;
	return stream;
}

istream &operator >> (istream &stream, coord &ob){
	stream >> ob.x >> ob.y;
	return stream;
}

int main()
{
/*	coord o1(1, 2), o2(3, 4);
	ofstream io("test1.txt");
	if (!io){
		cout << "Error Open File" << endl;
		return 1;
	}

	io << o1 << o2;
	io.close();
*/
	int i;
	char buf[800];

	ifstream fin("GG.txt");
	if (!fin){
		cout << "Error Open File" << endl;
		return 1;
	}
	fin.getline(buf, 800);
	
	fin.close();

	cout << buf << endl;


	system("PAUSE");
	return 0;
}