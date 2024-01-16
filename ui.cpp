#include "ui.h"
#include <iostream>

using std::cout;
using std::endl;
int UI::readInt(std::string message) {
	int output;
	cout << message << endl;
	std::cin >> output;
	return output;
}

void UI::write(std::string message) {
	cout << message << endl;
}
void UI::writeInt(int num) {
	cout << num << endl;
}
