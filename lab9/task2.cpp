#include <iostream>

using namespace std;

void main()
{

	setlocale(LC_ALL, "UKR");

	char ac = 'f', bc = '2';
	char* pac = &ac, * pbc = &bc;
	long int al = 3, bl = 4;
	long int* pal = &al, * pbl = &bl;

	cout << "\n Значення і різниця вказівників: ";
	cout << " \n npac =  " << (void*)pac << "/tpbc= " << (void*)pbc;
	cout << "\t (pac-pbc)= " << (pac - pbc);
	cout << "\n pal=" << pal << "\t pbl = " << pbl << "\t (pbl-pal)= " << (pbl - pal);
	cout << "Різниця числових значень вказівників:";
	cout << "\n (int)pac-(int)pbc = " << (int)pac - (int)pbc;
	cout << "\n (int)pbl-(int)pal= " << (int)pbl - (int)pal;

}
