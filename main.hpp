//
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

int getRandom(void)
{
    return rand() % 100;
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
    double mean = (rdnum1 + rdnum2 + rdnum3) / 3.0;
    double diff1 = abs(rdnum1 - mean);
    double diff2 = abs(rdnum2 - mean);
    double diff3 = abs(rdnum3 - mean);  

    if(diff1 <= diff2 && diff1 <= diff3){
        return rdnum1;
    } else if(diff2 <= diff1 && diff2 <= diff3){
        return rdnum2;
    } else {
        return rdnum3;
    }
}
