#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product{
private:
    std::string productName;
    double productPrice;
    int productStockQuantity;
    
public:
    // Setters.
    void setProductName(const std::string&n);
    void setProductPrice(double p);
    void setProductStockQuantity(int s);
    // Getters.
    std::string getProductName()const;
    double getProductPrice()const;
    int getProductStockQuantity()const;

};


#endif