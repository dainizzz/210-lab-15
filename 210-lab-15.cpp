// COMSC-210 | Lab 15 | Dainiz Almazan
// IDE used: CLion

/*

 * For your container, you can choose an <array> class array or a <vector> class vector. Store your four records in this
 * container.
 * Towards the end of your main() function, output the contents of the array/vector.
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
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
	// set up container, object, and variables needed for reading data from file
	vector<Movie> movies;
	Movie temp;
	string screenwriter, title;
	int releaseYear;

	// read data from file. order: title, year released, screenwriter name.
	ifstream infile;
	infile.open("input.txt");

	if (infile.good()) {

		infile.close();
	}
	else
		cout << "Error opening file" << endl;

	return 0;
}