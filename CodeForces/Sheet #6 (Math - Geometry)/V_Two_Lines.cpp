#include <iostream>
#include <limits>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    double slope1 = numeric_limits<double>::infinity(); // Default slope value for vertical line
    double slope2 = numeric_limits<double>::infinity(); // Default slope value for vertical line

    if (x1 != x2) {
        slope1 = (y2 - y1) / (x2 - x1);
    }

    if (x3 != x4) {
        slope2 = (y4 - y3) / (x4 - x3);
    }

    if (slope1 == slope2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
