#include <iostream>
//mike@flashmike.com
using namespace std;

int main(){
	int choice;
	int k, j;
	
	//let user choose an option
	cout << "Please choose:"
			"\nOption 1: k == 1 || k == 2"
			"\nOption 2: k == 3 || k == 5"
			"\nOption 3: k == 4"
			"\nOption 4: k == 6 || k == 7 || k == 8"
			"\n\nChoice: ";
	cin >> choice;
	printf("\n");
	
	//do the conditions based on user's choice
	switch(choice){
		//k == 1 || k == 2
		case 1:
			cout << "Enter a number to assign to k: ";
			cin >> k;
			j = 2 * k - 1;
			cout << "\nCalculation from Option " << choice << " is: " << "2 * " << k << " - 1 = " << j << endl;
			break;
		
		//k == 3 || k == 5
		case 2:
			cout << "Enter a number to assign to k: ";
			cin >> k;
			j = 3 * k - 1;
			cout << "\nCalculation from Option " << choice << " is: " << "3 * " << k << " - 1 = " << j << endl;
			break;
			
		//k == 4
		case 3:
			cout << "Enter a number to assign to k: ";
			cin >> k;
			j = 4 * k - 1;
			cout << "\nCalculation from Option " << choice << " is: " << "4 * " << k << " - 1 = " << j << endl;
			break;
			
		//k == 6 || k == 7 || k == 8
		case 4:
			cout << "Enter a number to assign to k: ";
			cin >> k;
			j = k - 2;
			cout << "\nCalculation from Option " << choice << " is: " << k << " - 2 = " << j << endl;
			break;
			
		case 5:
			return 0;
			
		default:
			cout << "\nError(s) on your entry. Please try again.";
	}
	
}
