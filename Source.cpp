#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// create a menu
	int menuSelection;

	cout << "Welcome to Convertency!\n" << endl;
	cout << "Please enter a number to select an option: " << endl;
	cout << "1. Convert currency" << endl;
	cout << "2. Exit Program" << endl;
	cout << "\nEnter number selection: ";
	cin >> menuSelection;

	while (menuSelection == 1) {
		system("cls");
		int startingCurrency, convertedCurrency;
		double amount, convertedAmount;
		char  again;

		// get currency types and amount
		cout << "Please enter appropriate number for starting currency type:\n" << endl;
		cout << "1. US Dollar" << endl;
		cout << "2. Euro" << endl;
		cout << "3. Japanese Yen" << endl;
		cout << "4. Great British Pound" << endl;
		cout << "5. Australlian Dollar" << endl;
		cout << "\nEnter number selection: ";
		cin >> startingCurrency;

		cout << "\nPlease enter appropriate number for desired currency type:\n" << endl;
		cout << "1. US Dollar" << endl;
		cout << "2. Euro" << endl;
		cout << "3. Japanese Yen" << endl;
		cout << "4. Great British Pound" << endl;
		cout << "5. Australlian Dollar" << endl;
		cout << "\nEnter number selection: ";
		cin >> convertedCurrency;

		system("cls");
		cout << "Please enter the starting amount of money you have: ";
		cin >> amount;
		system("cls");

		// check to see if currency type is the same
		if (startingCurrency == convertedCurrency) {
			cout << "Currency is already converted to desired type." << endl;
			cout << "Would you like to do another conversion (y / n): " << endl;
			cin >> again;

			if (again == 'n')
				menuSelection = 2;
		}

		else {
			switch (startingCurrency) {
			// USD starting conversion
			case 1:
				switch (convertedCurrency) {
				case 2:
					convertedAmount = amount * 0.94;
					cout << "Your " << amount << " dollars = " << convertedAmount << " euros." << endl;
					break;

				case 3:
					convertedAmount = amount * 132.41;
					cout << "Your " << amount << " dollars = " << convertedAmount << " Japanese yen." << endl;
					break;

				case 4:
					convertedAmount = amount * 0.83;
					cout << "Your " << amount << " dollars = " << convertedAmount << " Great British pounds." << endl;
					break;

				case 5:
					convertedAmount = amount * 1.49;
					cout << "Your " << amount << " dollars = " << convertedAmount << " Australian dollars." << endl;
					break;
				}
				break;

			// Euro starting conversion
			case 2:
				switch (convertedCurrency) {
				case 1:
					convertedAmount = amount * 1.06;
					cout << "Your " << amount << " euros = " << convertedAmount << " dollars." << endl;
					break;

				case 3:
					convertedAmount = amount * 140.37;
					cout << "Your " << amount << " euros = " << convertedAmount << " Japanese yen." << endl;
					break;

				case 4:
					convertedAmount = amount * 0.88;
					cout << "Your " << amount << " euros = " << convertedAmount << " Great British pounds." << endl;
					break;

				case 5:
					convertedAmount = amount * 1.58;
					cout << "Your " << amount << " euros = " << convertedAmount << " Australian dollars." << endl;
					break;
				}
				break;

			// Japenese yen starting conversion
			case 3:
				switch (convertedCurrency) {
				case 1:
					convertedAmount = amount * 0.0076;
					cout << "Your " << amount << " Japanese yen = " << convertedAmount << " dollars." << endl;
					break;

				case 2:
					convertedAmount = amount * 0.0071;
					cout << "Your " << amount << " Japanese yen = " << convertedAmount << " euros." << endl;
					break;

				case 4:
					convertedAmount = amount * 0.0063;
					cout << "Your " << amount << " Japanese yen = " << convertedAmount << " Great British pounds." << endl;
					break;

				case 5:
					convertedAmount = amount * 0.011;
					cout << "Your " << amount << " Japanese yen = " << convertedAmount << " Australian dollars." << endl;
					break;
				}
				break;

			// Great British pounds starting conversion;
			case 4:
				switch (convertedCurrency) {
				case 1:
					convertedAmount = amount * 1.2;
					cout << "Your " << amount << " Great British pounds = " << convertedAmount << " dollars." << endl;
					break;

				case 2:
					convertedAmount = amount * 1.14;
					cout << "Your " << amount << " Great British pounds = " << convertedAmount << " euros." << endl;
					break;

				case 3:
					convertedAmount = amount * 159.20;
					cout << "Your " << amount << " Great British pounds = " << convertedAmount << " Japanese Yen." << endl;
					break;

				case 5:
					convertedAmount = amount * 1.80;
					cout << "Your " << amount << " Great British pounds = " << convertedAmount << " Australian dollars." << endl;
					break;
				}
				break;

			// Australian Dollars starting conversion
			case 5:
				switch (convertedCurrency) {
				case 1:
					convertedAmount = amount * 0.67;
					cout << "Your " << amount << " Australian dollars = " << convertedAmount << " US dollars." << endl;
					break;

				case 2:
					convertedAmount = amount * 0.63;
					cout << "Your " << amount << " Australian dollars = " << convertedAmount << " euros." << endl;
					break;

				case 3:
					convertedAmount = amount * 88.14;
					cout << "Your " << amount << " Australian dollars = " << convertedAmount << " Japanese yen." << endl;
					break;

				case 4:
					convertedAmount = amount * 0.55;
					cout << "Your " << amount << " Australian dollars = " << convertedAmount << " Great British pounds." << endl;
					break;
				}
				break;

			}

			cout << "\nWould you like to do another conversion (y / n): ";
			cin >> again;

			if (again == 'n')
				menuSelection = 2;
		}
	}

	system("cls");
	cout << "Thank you for using Convertency!" << endl;
	system("pause");
}