#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;


namespace brewCalcs
{

    void finalGravity()
    {
        double og;
        const double aa = .75;    //attenuation safely estimated at .75

        cout << "Enter OG: ";
        cin >> og;

        double fg = og - ((og - 1) * .75);
        cout << "Expected Final Gravity is: "
             << setprecision(4) << fg << endl;

        char choice;
        cout << "Would you like to calculate expected ABV? ";
        cin >> choice;

        if(choice == 'y' || choice == 'Y')
        {
            cout << "Estimated ABV is: " << setprecision(4)
            << ((og - fg) * .129) * 1000;
        }
        else
        {
            return;
        }
    }

    void abv()
    {
        double og;
        double fg;

        cout << "Enter OG: ";
        cin >> og;

        cout << "Enter FG: ";
        cin >> fg;

        cout << "Estimated ABV is: " << setprecision(4)
        << ((og - fg) * .129) * 1000;
    }

    void abv2()
    {
        double og;
        double fg;

        cout << "Enter OG: ";
        cin >> og;

        cout << "Enter FG: ";
        cin >> fg;

        cout << "Estimated ABV is: " << setprecision(4)
        << ((1.05 *(og-fg)) / .0079 * fg) ;
    }

} //namespace
