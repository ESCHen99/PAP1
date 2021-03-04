#include <iostream>
using namespace std;

double f(int i){
	return (100e6 - i * i)/i;
}

int main(){
	double sum = 0;
	for(int i = 0; i <= 10e3; ++i){
		sum += f(i);
	}
	cout << sum / 100e6 + 2.d <<endl;
}
