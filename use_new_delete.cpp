#include<iostream>
#include<new>
const int BUF = 512;

char buffer[BUF] = { "woshizhonguoren"};

int main()
{
	using namespace std;
	char* pc = new (buffer)char;
	cout << "pc[0]:" << pc[0] << endl;
	cout << "pc[4]:" << pc[4] << endl;
	char* pd1 = new(buffer+1*sizeof(char))char[3];
	double* pd2 = new(buffer + 2 * sizeof(double)) double[4];
	cout << "sizeof double:" << sizeof(double) << endl;
	cout << "buffer:at " << (void*)buffer << endl;
	cout << "pc:at " <<(void*) pc << endl;
	cout << "pd2:at " << pd2 << endl;
}