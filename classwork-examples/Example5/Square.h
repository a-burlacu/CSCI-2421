//
// Created by lakhanis on 8/23/2020.
//

#ifndef EXAMPLE5_SQUARE_H
#define EXAMPLE5_SQUARE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Square
{
public:
    explicit Square( double s = 0.0 ) : side{ s }
    { }

    double getSide( ) const
    { return side; }
    double getArea( ) const
    { return side * side; }
    double getPerimeter( ) const
    { return 4 * side; }

    void print( ostream & out = cout ) const
    { out << "(square " << getSide( ) << ")"; }
    bool operator< ( const Square & rhs ) const
    { return getSide( ) < rhs.getSide( ); }

private:
    double side;
};

// Define an output operator for Square
ostream & operator<< ( ostream & out, const Square & rhs )
{
    rhs.print( out );
    return out;
}

#endif //EXAMPLE5_SQUARE_H
