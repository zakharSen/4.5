#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    double x, y, R;

    for (int i = 0; i < 10; i++) {
        cout << " x: ";
        cin >> x;
        cout << " y: ";
        cin >> y;
        cout << " R: ";
        cin >> R;

        if ((x * x + y * y <= R * R && y >= 0) || (y >= x - R && y <= 0)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    cout << "R = ";
    cin >> R;
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < 10; i++) {
        x = (rand() / (double)RAND_MAX) * (2 * R) - R;
        y = (rand() / (double)RAND_MAX) * (2 * R) - R;

        if ((x * x + y * y <= R * R && y >= 0) || (y >= x - R && y <= 0)) {
            cout << fixed << x << " " << y << " yes" << endl;
        }
        else {
            cout << fixed << x << " " << y << " no" << endl;
        }
    }

    return 0;
}