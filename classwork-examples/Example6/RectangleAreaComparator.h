//
// Created by lakhanis on 8/27/2020.
//
#include "Rectangle.h"
#ifndef HW2_RECTANGLEAREACOMPARATOR_H
#define HW2_RECTANGLEAREACOMPARATOR_H

class RectangleAreaComparator {
public:
    bool isLessThan (const Rectangle & lhs, const Rectangle & rhs) {
        int areaLhs = lhs.getWidth() * lhs.getLength();
        int areaRhs = rhs.getWidth() * rhs.getLength();

        return (areaLhs < areaRhs);
    }
};


#endif //HW2_RECTANGLEAREACOMPARATOR_H
