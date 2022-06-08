//
// Created by lakhanis on 8/27/2020.
//
#include "Rectangle.h"

#ifndef HW2_RECTANGLEPERIMETERCOMPARATOR_H
#define HW2_RECTANGLEPERIMETERCOMPARATOR_H

class RectanglePerimeterComparator {
public:
    bool isLessThan (const Rectangle & lhs, const Rectangle & rhs) {
        int perimeterLhs = (lhs.getWidth() + lhs.getLength()) * 2;
        int perimeterRhs = (rhs.getWidth() + rhs.getLength()) * 2;

        return (perimeterLhs < perimeterRhs);
    }
};

#endif //HW2_RECTANGLEPERIMETERCOMPARATOR_H
