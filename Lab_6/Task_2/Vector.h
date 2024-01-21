#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
private:
    int i_comp;
    int j_comp;
    int k_comp;
public:
    Vector() : i_comp(0), j_comp(0), k_comp(0){}
    Vector(int i, int j, int k) : i_comp(i), j_comp(j), k_comp(k){}

    Vector operator+ (const Vector& obj){
        Vector result;
        result.i_comp = this->i_comp + obj.i_comp;
        result.j_comp = this->j_comp + obj.j_comp;
        result.k_comp = this->k_comp + obj.k_comp;
        return result;
    }

    void displayVector(){
        std::cout << "The vector is " << i_comp << "i + " << j_comp << "j + " << k_comp << "k" << std::endl;
    }

    ~Vector(){}
};

#endif