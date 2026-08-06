// In this program I'll learn about while loops in C++. I used the tutorial by freeCodeCamp.org on Youtube.
//

#include <iostream>

using namespace std;

int main()
{
    
    int index = 1;
    while (index <= 5) { // While the statement in the round brackets is true, the code inside while will be executed. It will loop and check the condition every time.
		cout << index << endl;
        index++;
    }

	// Another option would also be using a do while loop. The difference is that the code inside the do while loop will be executed at least once, even if the condition is false. 
    // In a while loop, the code inside will not be executed if the condition is false.

}

// This was a short one, just to get the basics down!