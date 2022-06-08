#include <iostream>
#include<vector>
#include "Rectangle.h"
#include <algorithm>
#include "RectangleAreaComparator.h"
#include "RectanglePerimeterComparator.h"

using namespace std;

// Generic findMax, with a function object, Version #1.
// Precondition: a.size( ) > 0.
template <typename Object, typename Comparator>
const Object & findMax( const vector<Object> & arr, Comparator cmp )
{
    int maxIndex = 0;

    for( int i = 1; i < arr.size( ); ++i )
        if( cmp.isLessThan( arr[ maxIndex ], arr[ i ] ) )
            maxIndex = i;

    return arr[ maxIndex ];
}

int main() {
    //Create a vector to store Rectangle object and
    //populate it with five Recatngle objects

    vector<Rectangle> v = {Rectangle{9, 3},  //27, 24
                           Rectangle {5, 6}, //30, 22
                           Rectangle {2, 10}, // 20, 24
                           Rectangle {5, 5},  //25, 20
                           Rectangle {3, 5}};  // 15, 16

    //Display list of Rectangles
    cout << "List of Rectangle" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << "Rectangle " << (i+1) << " is {" << v[i].getLength() << ", "
                               << v[i].getWidth() << "}" << endl;
    }
    cout << endl;

    RectangleAreaComparator rac = RectangleAreaComparator{};

    Rectangle result = findMax( v, rac);
    cout << "Largest Rectangle by Area is {" << result.getLength() << ", "
         << result.getWidth() << "} Area is " << (result.getLength() * result.getWidth()) << endl;
    cout << endl;

    cout << endl;

    RectanglePerimeterComparator rpc = RectanglePerimeterComparator{};

    Rectangle result2 = findMax( v, rpc);

    cout << "Largest Rectangle by Perimeter is {" << result2.getLength() << ", "
         << result2.getWidth() << "} Perimeter is " << ((result.getLength() + result.getWidth())*2) << endl;

    cout << endl;

}