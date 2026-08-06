// In this program I am learning about switch statements in C++. I used the tutorial by freeCodeCamp.org on Youtube.
// We are doing this by trying to get the day of the week from a number input.

#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) {

    string dayName; 

    switch (dayNum) { // dayNum is the value I want to compare to the different values of the days of the week. That's why we put it as input for the switch.
    case 0: 
		dayName = "Sunday";
		break; 
	case 1:
		dayName = "Monday";
        break;
	case 2:
		dayName = "Tuesday";
		break;
	case 3:
		dayName = "Wednesday";
		break;
	case 4:
		dayName = "Thursday";
		break;
	case 5:
		dayName = "Friday";
		break;
	case 6:
		dayName = "Saturday";
		break;

	default: 
		dayName = "Invalid day number.";

    }



    return dayName;
}

int main()
{
    
	cout << getDayOfWeek(0) << endl; // This will return Sunday. 

	cout << getDayOfWeek(3) << endl; // This will return Wednesday.

	cout << getDayOfWeek(10) << endl; // This will return Invalid day number.

}

// 