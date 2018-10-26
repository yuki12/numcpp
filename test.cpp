#include "Matrix.hpp"
int main ()
{
    numcpp::Matrix<double, 3, 4> m, n;
    numcpp::setIdentity (m);
    numcpp::setZero (n);
    numcpp::add (n, m);
    return 0;
}
