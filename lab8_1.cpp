#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	float PrevBalance, Interest, Payment;
	int year = 1;
	
	cout << "Enter initial loan: ";
	cin >> PrevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> Interest;
	cout << "Enter amount yeraly paying: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do {
	    float netInterest = PrevBalance * (Interest/100);
	    
	    cout << fixed << setprecision(2); 
    	cout << setw(13) << left << year; 
    	cout << setw(13) << left << PrevBalance;
    	cout << setw(13) << left << netInterest;
    	
    	PrevBalance += netInterest;
    	cout << setw(13) << left << PrevBalance; // total
    	
    	Payment = PrevBalance < Payment ? PrevBalance : Payment;
    	cout << setw(13) << left << Payment;
    	
    	PrevBalance -= Payment;
    	PrevBalance = PrevBalance < 0 ? 0 : PrevBalance;
    	cout << setw(13) << left << PrevBalance; // new balance
    	cout << "\n";
    	
    	year++;
    	
	} while (PrevBalance > 0);
	
	return 0;
}
