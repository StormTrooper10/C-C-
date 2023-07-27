#include <iostream>
using namespace std;
#include "SwimmingPool.h"

swimmingPool::swimmingPool ( double length, double width, double depth, double fillRate, double drainageRate)
{
    this->length = length;
    this->width = width;
    this->depth = depth;
    this->fillRate = fillRate;
    this->drainageRate = drainageRate;
}

double swimmingPool::amountOfWater(double initialVolume)
{
    return(7.4805*length*width*depth - initialVolume); //since there are 7.4805 gallons in each cubic foot,
                                               //multiply the cubic feet of pool by 7.4805 to arrive at the volume of pool(expressed in gallons)
}

double swimmingPool::timeToFill(double initialVolume, double finalVolume)
{
    if(finalVolume == -1)
    {
        finalVolume = length*width*depth;
    }

    return((finalVolume-initialVolume)/(fillRate-drainageRate));
}

double swimmingPool::timeToDrain(double initialVolume)
{
    if(initialVolume == -1)
    {
        initialVolume = length*width*depth;
    }
    return (initialVolume/(drainageRate-fillRate));
}

int main()

{
    swimmingPool* swimmingPool1 = new swimmingPool(400, 500 , 600, 8, 4);
    swimmingPool* swimmingPool2 = new swimmingPool(400, 500, 600, 4,8);

    cout<<"\nWATER REQUIRED TO FILL THE SWIMMING POOL IS : "<<swimmingPool1->amountOfWater()<<" gallons";
    cout<<"\nTIME REQUIRED TO FILL THE SWIMMING POOL IS : "<<swimmingPool1->timeToFill()<<" min";
    cout<<"\nTIME REQUIRED TO EMPTY THE SWIMMING POOL IS : "<<swimmingPool2->timeToDrain()<< " min"<<endl;
    return 0;
}
