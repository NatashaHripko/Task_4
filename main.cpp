#include <iostream>
#include <array>
#include <string>
#include <cstring>

using namespace std;


struct car
{
	string name;
	int year;
};


int main()
{
	cout << "Enter please two numbers: ";      // task 1
	int num1, num2, sum=0;
	cin >> num1 >> num2;
	for (int i = 0; i <= (num2 - num1); ++i)
		sum += num1 + i;
	cout << "Sum =" << sum << endl;
	cout << endl; 

	
	array <long double, 101> factorials;     //task 2
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < 101; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < 101; i++)
	cout << i << "! = " << factorials[i] << endl;
		cout << endl;   

	cout << "Enter the numbers: " << endl;    //task 3
	int number=1, summ=0;
	while (number != 0) 
	{
		cin >> number;
		summ += number;
		cout << summ;
	} 
		cout << endl;  

	double CleoDep=100, DaphnaDep=100;              // task 4
	double CleoProf, DaphnaProf, CleoBalance, DaphnaBalance;
	DaphnaProf = 0.1*DaphnaDep;
	CleoProf = 0, 05 * CleoDep;
	int year=1;
	CleoBalance = CleoDep + (CleoProf*year);
	DaphnaBalance = DaphnaDep + DaphnaProf;
	while (DaphnaBalance > CleoBalance)
	{
		CleoProf = 0.05*CleoDep;
		CleoBalance = CleoDep + CleoProf;
		CleoDep = CleoBalance;
		DaphnaBalance = DaphnaDep + (DaphnaProf*year);
		cout << "Cleo`s balance = " << CleoBalance << " dollars." << endl;
		cout << "Daphna`s balance = " << DaphnaBalance << " dollars. " << endl;
		++year;

	}
	cout << "Years: " << --year << endl;
	cout << endl;
	
	

	int arrayBooksSold[12];       // task 5
	int totalBooksSold = 0;

	string arrayMonths[12] = {
	"January", "February ", "March", "April", "May", "June", "July",
	"August", "September", "October ", "November", "December" };

	for (int i = 0; i < 12; ++i)
	{
		cout << "Enter the number of books sold per:  ";
		cout << arrayMonths[i] << endl;
		cin >> arrayBooksSold[i];
		totalBooksSold += arrayBooksSold[i];
	}
	cout << "Total books sold per year: " << totalBooksSold;
	cout << endl;
	


	int booksSoldPerMonth[3][12];      // task 6
	int totalBooksSold = 0;
	string months[12] = {
	"January", "February ", "March", "April", "May", "June", "July",
	"August", "September", "October ", "November", "December" };
	string year[3] = { "1 year\t", "2 year\t", "3 year\t" };

	for (int y = 0; y < 3; ++y)
	{
		int booksSoldPerYear = 0;
		int m;
		for (m = 0; m < 12; ++m)
		{
			cout << "Enter the number of books sold per: ";
			cout << months[m] <<" "<< year[y];
			cin >> booksSoldPerMonth[y][m];
			booksSoldPerYear += booksSoldPerMonth[y][m];
		}
		cout << "Total books sold per year:  " << booksSoldPerYear;
		totalBooksSold += booksSoldPerYear;
		cout << endl;
	}

	cout << "Total books sold for 3 years:  " << totalBooksSold;
	cout << endl; 

	
	int qty;                                   // task 7
	cout << "How many cars to put in the catalog? ";
	cin >> qty;
	cin.ignore();
	cout << endl;
	car* p_catalog = new car[qty];
	for (int i = 0; i < qty; ++i)
	{
		cout << "Car ¹ " << i + 1 << ":" << endl;
		cout << "Enter the name of the car model: ";
		getline(cin, p_catalog[i].name);
		cin.clear();
		cout << "Enter the year of manufacture of the car: ";
		cin >> p_catalog[i].year;
		cin.ignore();
		cout << endl;
	}

	cout << "Here is your colection: "<<endl;
	cout << endl;

	for (int i = 0; i < qty; ++i)
	{
		cout << p_catalog[i].year << " " << p_catalog[i].name << endl;
		cout << endl;
	}

	delete[] p_catalog; 
	cout<<endl;


	
	const int size = 20;     // task 8
	char answer[size];
	int qty = 0;
	cout << "Enter the words (to complete, enter the word 'done'): "<<endl;
	cin >> answer;
	while (strcmp(answer, "done"))
	{
		cin >> answer;
		++qty;
	}

	cout << "You entered  " << qty << " words." << endl;
	cin.get();
	cout<<endl;


	int qty = 0;               //task 9
	string userword;
	string extraword="done";
	cout << "Enter the words (to complete, enter the word 'done'): " << endl;
	getline(cin, userword);

	while (userword != extraword)
	{
		getline(cin, userword);
		++qty;
	}

	cout << "You entered  " << qty << " words." << endl;
	cout << endl;  


	system("pause");
	return 0;


}
