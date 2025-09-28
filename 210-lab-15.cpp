// COMSC-210 | Lab 15 | Dainiz Almazan
// IDE used: CLion

/*
 * Your code should read data from an input file, using the data below, which lists data in this order: title, year
 * released, screenwriter name.
 * Read this data into a temporary Movie object. Then append that object to your container.
 * For your container, you can choose an <array> class array or a <vector> class vector. Store your four records in this
 * container.
 * Towards the end of your main() function, output the contents of the array/vector.
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int WIDTH = 10;

class Movie {
	string screenwriter;
	int releaseYear;
	string title;
public:
	string getScreenwriter() const {return screenwriter;}
	int getReleaseYear() const {return releaseYear;}
	string getTitle() const {return title;}
	void setScreenwriter(string screenwriter) {this->screenwriter = screenwriter;}
	void setReleaseYear(int releaseYear) {this->releaseYear = releaseYear;}
	void setTitle(string title) {this->title = title;}
	void print() const {
		cout << setw(WIDTH) << "Movie: " << title << endl;
		cout << setw(WIDTH) << "\tYear released: " << releaseYear << endl;
		cout << setw(WIDTH) << "\tScreenwriter: " << screenwriter << endl;
	}

};

int main() {
	return 0;
}