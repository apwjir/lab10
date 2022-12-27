#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double loan, rate, pay, Nbal;
int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

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
	double Previ = loan;
	Nbal = loan;
	for(int i = 1; Nbal != 0; i++){
	double inter = rate / 100 * Previ;
	double tot;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << Previ;
	cout << setw(13) << left << inter;
		tot = Previ + inter;
	cout << setw(13) << left << tot;
	if(tot < pay){
		pay = tot;
	}
	cout << setw(13) << left << pay;
	Nbal = tot - pay;
	cout << setw(13) << left << Nbal;
	cout << "\n";
	Previ = Nbal;
	}	
	
	return 0;
}
