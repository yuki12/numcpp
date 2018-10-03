#include "Matrix.hpp"
int main ()
{
    numcpp::Matrix<double, 3, 4> m;
    numcpp::setIdentity(m);
    numcpp::setZero(m);
    return 0;
}
