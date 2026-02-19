#include "Rectangle.h"

int main()
{
	int n;
	cout << "Enter number of rectangles: ";
	cin >> n;

	Rectangle** rects = new Rectangle * [n];
	for (int i = 0; i < n; i++) {
		cout << "Rectangle " << i + 1 << endl;
		Point tl, br;
		cout << "Enter top-left point (x,y): ";
		tl.input();
		cout << "Enter bottom-right point (x,y): ";
		br.input();

		rects[i] = new Rectangle(tl, br);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if ((*rects[j]).area() > (*rects[j + 1]).area()) {
				Rectangle* temp = rects[j];
				rects[j] = rects[j + 1];
				rects[j + 1] = temp;
			}
		}
	}

	ofstream out("rectangles.txt");
	for (int i = 0; i < n; i++) {
		(*rects[i]).outputToFile(out);
	}

	out.close();
	cout << "Sorted rectangles were written to rectangles.txt" << endl;
	for (int i = 0; i < n; i++) {
		delete rects[i];
	}
	delete[] rects;

	return 0;
}