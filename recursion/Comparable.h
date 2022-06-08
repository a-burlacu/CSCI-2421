#ifndef COMPARABLE_H
#define COMPARABLE_H

#include "rectangle.h"
class CompareRectangleArea{

public:
    bool isLessThan (const Rectangle & lhs, const Rectangle & rhs){
       return lhs.area() < rhs.area();
    }


};






#endif
