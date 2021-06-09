//  program to find the prime numbers between a given interval
#include <bits/stdc++.h>
using namespace std;

										
void primeInRange(int Low, int High)         // Function for print prime number in given range   
{
	int flag;

											// Traverse each number in the interval with the help of for loop
	for (int i = Low; i <= High; i++) {

											// Skip 0 and 1 as they are neither prime nor composite
		if (i == 1 || i == 0)
			continue;

											// flag variable to tell if i is prime or not
		flag = 1;

		     								// Iterate to check if i is prime or not
		for (int j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

											// flag = 1 means i is prime and flag = 0 means i is not prime
		if (flag == 1)
			cout << i << endl;
	}
}


int main()
{
	
	int Low, High ;
	cout<<" ENTER THE LOWER RANGE";
	cin>>Low;
	cout<<" ENTER THE UPPER RANGE";
	cin>>High;


										
	primeInRange(Low, High);            	// Function Call

	return 0;
}

