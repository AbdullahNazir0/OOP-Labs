#include <iostream>
#include "SwimmingPool.h"

using namespace std;

int main()
{
    SwimmingPool pool1;
    double len, wid, dep, fill_r, drain_r;

    cout << "Enter the length of the swimming pool(in feet): ";
    cin >> len;
    cout << "Enter the width of the swimming pool(in feet): ";
    cin >> wid;
    cout << "Enter the depth of the swimming pool(in feet): ";
    cin >> dep;
    cout << "Enter the fill rate of the swimming pool(in cubic feet / minute): ";
    cin >> fill_r;
    cout << "Enter the drain rate of the swimming pool(in cubic feet / minute): ";
    cin >> drain_r;
    
    pool1.setLength(len);
    pool1.setWidth(wid);
    pool1.setDepth(dep);
    pool1.setFillRate(fill_r);
    pool1.setDrainRate(drain_r);

    double volume;
    cout << "The time required to completely fill the swimming pool is " << pool1.Complete_Fill() << " minutes." << endl;
    cout << "Enter the volume of swimming pool(in cubic feet) that is already filled to get partial fill time.";
    cin >> volume;
    cout << "The time required to partially fill the swimming pool is " << pool1.Partial_Fill(volume) << " minutes." << endl;
    
    cout << "The time required to completely drain the swimming pool is " << pool1.Complete_Drain() << " minutes." << endl;
    cout << "Enter the volume of swimming pool(in cubic feet) that is already drained to get partial drain time.";
    cin >> volume;
    cout << "The time required to partially drain the swimming pool is " << pool1.Partial_Drain(volume) << " minutes." << endl;

    return 0;
}