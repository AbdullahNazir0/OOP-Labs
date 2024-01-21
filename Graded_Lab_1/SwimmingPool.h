#ifndef SWIMMINGPOOL_H
#define SWIMMINGPOOL_H

class SwimmingPool {
private:
    // Attributes.
    double length;
    double width;
    double depth;
    double fillRate;
    double drainRate;

public:
    // Setters.
    void setLength(double l);
    void setWidth(double w);
    void setDepth(double d);
    void setFillRate(double fR);
    void setDrainRate(double dR);

    // Getters.
    double getLength()const;
    double getWidth()const;
    double getDepth()const;
    double getFillRate()const;
    double getDrainRate()const;

    // Methods.
    double Complete_Fill();
    double Partial_Fill(double vol);
    double Complete_Drain();
    double Partial_Drain(double vol);

};

#endif