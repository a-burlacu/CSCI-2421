#include <iostream>
#include "Comparable.h"
using namespace std;

class Square{
public:
    explicit Square(double s = 0.0):side{s} {}
    double getSide() const {return side;}
    double getArea() const {return side * side;}
    double getParameter() const {return 4* side;}

private:
    double side;

};

