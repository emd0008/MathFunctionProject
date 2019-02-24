#include <iostream>
#include <string>
#include "Basic.h"
#include "CommonFormulas.h"

using namespace std;

int main() {
	char input_i;
	string input_str;
	int i_x, i_y;
	double d_x, d_y, d_h;
	float f_x, f_y, f_h;
	bool basic, common, run = true;

	while (run){
		cout << "Do you want to do basic functions or common formulas?" << endl;
		cout << "Type 'Basic' for basic funcions. Type 'Common' for common formulas" << endl;
		cout << "Type 'Quit' to stop the program." << endl;
		getline(cin, input_str);

		if (input_str == "Basic") {
			basicFunction();
		}
		else if (input_str == "Common") {
			commonFunction();
		}
		else if (input_str == "Quit") {
			run = false;
		}
		else {
			cout << "Invalid comment" << endl;
		}
	}
}
