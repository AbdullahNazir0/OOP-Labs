#include "Product.h"

void Product::setProductName(const std::string &n)
{
    productName = n;
}
void Product::setProductPrice(double p)
{
    productPrice = p;
}
void Product::setProductStockQuantity(int s)
{
    productStockQuantity = s;
}
std::string Product::getProductName() const
{
    return productName;
}
double Product::getProductPrice() const
{
    return productPrice;
}
int Product::getProductStockQuantity() const
{
    return productStockQuantity;
}