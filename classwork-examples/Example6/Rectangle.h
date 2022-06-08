/**
 * Header for Rectangle class. Rectangle class has two variables
 * length and width both of type int. Rectangle class has two constructors
 * one is no parameter constructor which sets the length and width to 1.
 * The second constructor takes two arguments len to set the length and
 * wid to set the width
 *
 * Author: Dr. Salim Lakhani
 * Version: 20200827
 *
 */


#ifndef HW2_RECTANGLE_H
#define HW2_RECTANGLE_H


class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle ();
    Rectangle (int len, int wid);

    int getLength () const;
    int getWidth () const;
    int area() const;

};


#endif //HW2_RECTANGLE_H
