#include "point.h"
#include "rect.h"
int main() {
	int n;
	cout << "Input number of Rectangle: \n";
	cin >> n;
	rectangle** rects = new rectangle * [n];
	for (int i = 0; i < n; i++) {
		rects[i] = new rectangle();
		cout << "Rectangle " << i + 1 << endl;
		rects[i]->input();
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < i; j++) {
			if (rects[i]->area() > rects[i]->area()) {
				rectangle* temp = rects[i];
				rects[i] = rects[j];
				rects[j] = temp;
			}
		}
	}
	ofstream fout("rectangles.txt");
	for (int i = 0; i < n; i++)
		rects[i]->WriteToFile(fout);
	for (int i = 0; i < n; i++) {
		delete[] rects[i];
	}
	delete[] rects;

	return 0;
}
//int main() {
//    int n;
//    cout << "How many rectangles? ";
//    cin >> n;
//    rectangle** rects = new rectangle * [n];;
//    for (int i = 0; i < n; i++) {
//        rects[i] = new rectangle();
//        cout << "\nRectangle " << i + 1 << "\n";
//        rects[i]->input();
//    }
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1; j++) {
//            if (rects[j]->area() > rects[j + 1]->area()) {
//                rectangle* temp = rects[j];
//                rects[j] = rects[j + 1];
//                rects[j + 1] = temp;
//            }
//        }
//    }
//    ofstream fout("rectangles.txt");
//    for (int i = 0; i < n; i++)
//        rects[i]->WriteToFile(fout);
//    for (int i = 0; i < n; i++) {
//        delete[] rects[i];
//    }
//    cout << "\nRectangles sorted by area:\n";
//    for (int i = 0; i < n; i++) {
//        rects[i]->output();
//    }
//
//    for (int i = 0; i < n; i++) delete rects[i];
//
//    return 0;
//}