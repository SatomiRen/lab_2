#include <iostream>
using namespace std;
struct tv
{
	char[10] made;
	char[10] model;
	short int diag;
	enum class res :char { HD, FullHD, UltraHD };
}
int Main()
{
	cout << sizeof(tv) << " byte(s)";
	return 0;
}