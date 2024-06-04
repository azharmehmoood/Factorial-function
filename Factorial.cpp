#include<iostream>
using namespace std;


int factorial(int a) {
	int factorial=1;
	for (int i = 1; i <= a; i++) {
		factorial = i * factorial;
	}
	cout << factorial;
	return factorial;
}
int main() {
	
	
	int num;
	cin >> num;
	
	factorial(num);
	
	
	
	
	return 0;

}