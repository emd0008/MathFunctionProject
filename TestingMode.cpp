#include <iostream>
#include <string>

using namespace std;

bool testing;
string input_s;

void testingFunction() {
	testing = true;
	while (testing) {
		cout << "\nWelcome to the Testing mode." << endl;
		cout << "You can chose either the Basic or Common formulas to test on." << endl;
		cout << "Input the numbers you wish to calculate for the formula." << endl;
		cout << "Choose one of the answers." << endl;
		cout << "If you choose correctly, you can chose another formula to test on." << endl;
		cout << "If you choose wrong, you will be shown the correct answer and then choose another formula." << endl;
		cout << "Type 'Quit' to stop the program." << endl;
		getline(cin, input_s);

		if (input_s == "Basic"){
			cout << "Under construction" << endl;
		}
		else if (input_s == "Common") {
			cout << "Under construction" << endl;
		}
		else if (input_s == "Quit") {
			testing = false;
		}
		else {
			cout << "Invalid comment" << endl;
		}
	}
}