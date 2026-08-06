// In this program I'll learn about classes and objects in C++. I used the tutorial by freeCodeCamp.org on Youtube.
//

#include <iostream>

using namespace std;

class Book { // This is a class. A class is a blueprint for an object. It defines the properties and methods of an object.
public:
	string title;
	string author;
	int pagecount;

	Book(string aTitle, string aAuthor, int aPagecount) {

		title = aTitle;
		author = aAuthor;
		pagecount = aPagecount;
	}

};

int main()
{
    string name = "chai";
    double pi = 3.14;
    char favLetter = 'V'; // These are all data types that are known to c++.

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
	//book1.title = "The Great Gatsby";
	//book1.author = "F. Scott Fitzgerald";
	//book1.pagecount = 180; // I added an object via my class that I defined above the main function. All of the properties operate as variables that can be accessed via the object.

	cout << book1.pagecount << endl;

    return 0;
    
}

// 