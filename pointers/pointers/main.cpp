#include <iostream>
#include <memory>
using namespace std;

int main()
{
	int *a = (int*) malloc(10 * sizeof *a);
	int *b = a;
	for (int i = 0; i < 10; i++) {
		*a = i;
		a++;
	}
//	for (int j = 0; j < 10; j++) {
//		cout << *b << endl;
//		b++;
//	}
//	int *c = (int*) realloc(b, 2 * sizeof *c);
//	int *d = c;
//	for (int k = 0; k < 20; k++) {
//		cout << *d << endl;
//		d++;
//	}
	
	cout << a[-1] << endl;
	return 0;
}