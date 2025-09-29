// COMSC-210 | Lab 15 | Dainiz Almazan
// IDE used: CLion

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

const int WIDTH = 10;

class Movie {
	// Because the default access specifier for classes is private, these attributes are private
	// without needing to include the private: access specifier
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
	vector<Movie> movies;
	Movie temp;
	string screenwriter, title;
	int releaseYear;
	ifstream infile;

	infile.open("input.txt");
	if (infile.good()) {
		while (getline(infile,title)) {
			infile >> releaseYear;
			infile >> screenwriter;
			temp.setTitle(title);
			temp.setReleaseYear(releaseYear);
			temp.setScreenwriter(screenwriter);
			movies.push_back(temp);
			infile.ignore();
		}
		infile.close();
	}
	else
		cout << "Error opening file" << endl;

	for (auto movie : movies) {
		movie.print();
	}

	return 0;
}