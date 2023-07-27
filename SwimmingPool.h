//#include <cmath>
#ifndef INTTYPE_H_
#define INTTYPE_H_


class swimmingPool
{
    private:

        double length;
        double width;
        double depth;
        double fillRate;
        double drainageRate;

    public:

        swimmingPool(double length, double width, double depth, double fillRate, double drainageRate );
        double amountOfWater(double initialVolume = 0);
        double timeToFill(double initialVolume = 0, double finalVolume = -1);
        double timeToDrain(double initialVolume = -1);

};

#endif
