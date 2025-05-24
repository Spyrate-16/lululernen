#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	cout << "Denke dir eine Zahl zwischen 0 und 100 aus" << endl;
	string eingabe;
    int mid = 100/2; //replace 100 for higher range with variable if wanted
    int high = 100;
    int low = 0;
    do{
		mid = (low + high) / 2;
    	cout << "Ist die Zahl größer oder kleiner als " << mid << endl;
    	cin >> eingabe;
		if (eingabe == "<") { // Wenn gesuchte Zahl kleiner ist
			high = mid - 1;
		} else if (eingabe == ">") { // Wenn gesuchte Zahl größer ist
			low = mid + 1;
		} else if (eingabe == "=") {
			cout << "Deine Zahl war " << mid << "!" << endl;
			break;
		} else {
			cout << "Ey nur <, > oder = sonst ich böse >:c" << endl;
		}
    }
	while (eingabe != "=");
		return 0;

}
