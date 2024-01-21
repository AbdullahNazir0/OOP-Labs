#include "SwimmingPool.h"

// Setters.
void SwimmingPool::setLength(double l)
{
    length = l;
}
void SwimmingPool::setWidth(double w)
{
    width = w;
}
void SwimmingPool::setDepth(double d)
{
    depth = d;
}
void SwimmingPool::setFillRate(double fR)
{
    fillRate = fR;
}
void SwimmingPool::setDrainRate(double dR)
{
    drainRate = dR;
}

// Getters.
double SwimmingPool::getLength() const
{
    return length;
}
double SwimmingPool::getWidth() const
{
    return width;
}
double SwimmingPool::getDepth() const
{
    return depth;
}
double SwimmingPool::getFillRate() const
{
    return fillRate;
}
double SwimmingPool::getDrainRate() const
{
    return drainRate;
}

// Methods.
double SwimmingPool::Complete_Fill()
{
    return ((length * width * depth) / fillRate);
}
double SwimmingPool::Partial_Fill(double vol)
{
    return (((length * width * depth) - vol) / fillRate);
}
double SwimmingPool::Complete_Drain()
{
    return ((length * width * depth) / drainRate);
}
double SwimmingPool::Partial_Drain(double vol)
{
    return (((length * width * depth) - vol) / drainRate);
}