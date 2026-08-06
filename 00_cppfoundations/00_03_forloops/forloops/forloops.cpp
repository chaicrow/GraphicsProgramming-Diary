// In this program I'll learn about for loops in C++. I used the tutorial by freeCodeCamp.org on Youtube.
// 
//ForLoops keep an index count of the amount of times the loop has been executed. The index count is usually used to access elements in an array.

#include <iostream>

using namespace std;   

int main()

{

	for (int i = 1; i <= 5; i++) {    // 1. initialization of the index count; 2. condition that needs to be true for the loop to be executed; 3. increment of the index count
		cout << i << endl;    
    }

	// This is equivalent to the while loop in the while loop file. 
    // The difference is that the for loop has a built in index count, while the while loop needs to be set up with an index variable outside of the loop.


    int nums[] = { 1, 2, 5, 7, 3 };
    
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << endl;
	} 
    // The for loop can be used to access elements in an array. 
    // The index count is used to access the elements in the array.

}

// I find this a bit challenging and will have to play around with it more.