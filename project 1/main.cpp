#include "rectangle.h"

int main() {
	int n;
	cout << "Enter the number: ";
	cin >> n;

	Rectangle** rectangles = new Rectangle*[n];

	for (int i = 0; i < n; i++) {
		cout << "Enter rectangle: " << i + 1 << ":" << endl;
		rectangles[i] = new Rectangle();
		rectangles[i]->input();
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (rectangles[j]->area() < rectangles[j + 1]->area()) {
				Rectangle* temp = rectangles[j];
				rectangles[j] = rectangles[j + 1];
				rectangles[j + 1] = temp;
			}
		}
	}

	ofstream fout("rectangles.txt");
	for (int i = 0; i < n; i++) {
		fout << *rectangles[i] << endl;
	}
	fout.close();

	cout << "\nRectangles sorted by area:" << endl;
	for (int i = 0; i < n; i++) {
		rectangles[i]->output();
		delete rectangles[i];
	}
	delete[] rectangles;
	return 0;

	}