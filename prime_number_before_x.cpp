
#include <iostream>
using namespace std;

int main()
{

	int l, a;
	cout << "Enter a number and program will find closest prime number to your nummber : ";
	cin >> l;


	for (int i = 2; i < l; i++) { // for ex you choose 9 and program will start divide 9 to 2,3.. After 3 program will decrease from 9 to 8. 
		// And also program will make i=2 for not missin dividing component numbers(2 and 3 for example)
		a = l % i;
		if (a == 0) {
			l--;
			i=2;

		}

	}

	cout << "The prime number is "<<l<<endl ;


	return 0;
}

