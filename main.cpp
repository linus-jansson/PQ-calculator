#include <iostream>
#include <cmath>

using namespace std;


int main() 
{
    cout << "This program solves X in a Quadratic Equation (ax^2 + px + q = 0)" << endl << endl;

    double a;
    cout << "What number is the a: ";
    cin >> a;

    double p;
    cout << "What number is the P: ";
    cin >> p;

    double q;
    cout << "What number is the Q: ";
    cin >> q;

    p = p / a;
    q = q / a;

    double  inside_SQRT = ((pow(p, 2) / 4.0) - q);

    if (inside_SQRT < 0)
    {
        cout << "This Equation gives to Complex numbers" << endl << endl;

        cout << showpos;
        cout << "Your x1 is: " << (-p / 2) << " " << sqrt(-inside_SQRT) << "i" << endl;
        cout << "Your x2 is: " << (-p / 2) << " " << sqrt(-inside_SQRT) << "i" << endl;
        cout << noshowpos;
        // cout << "The nollpunkt is a NON real number, please try again";
        // return -1;
    } 
    else if (inside_SQRT == 0)
    {
        double x = (-p / 2) + (sqrt(inside_SQRT));

        cout << "The anwser only has one solution" << endl;
        cout << "Your x is: " << x << endl;

    } else
    {
        double x1 = (-p / 2) + (sqrt(inside_SQRT));
        double x2 = (-p / 2) - (sqrt(inside_SQRT));

        cout << "Your x1 is: " << x1 << endl;
        cout << "Your x2 is: " << x2 << endl;
    }


    return 0;
    

}
