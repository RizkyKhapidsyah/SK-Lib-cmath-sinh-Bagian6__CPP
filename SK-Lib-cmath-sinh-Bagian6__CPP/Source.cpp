#include <iostream>
#include <cmath>
#include <conio.h>

/*  Source by Programiz
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

using namespace std;

int main() {
    double x = 3.55, result;

    result = sinh(x);
    cout << "sinh(x) = " << result << endl;

    // x in Degrees
    double xDegrees = 90;
    x = xDegrees * 3.14159 / 180;

    result = sinh(x);
    cout << "sinh(x) = " << result << endl;

    _getch();
    return 0;
}