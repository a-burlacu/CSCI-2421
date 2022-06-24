/********************************************
 * ComparatorID header file. 
 * Contains definition of member function used to create 
 * comparable ID function object.
 * 
 * Author: Alina Burlacu
 * Version: 06152022
 *********************************************/
#ifndef HW2_COMPARATOR_ID_H
#define HW2_COMPARATOR_ID_H

// ComparatorID class declaration & definition

class ComparatorID
{
public:
    bool isLessThan(const Student &lhs, const Student &rhs)
    {
        return (lhs.getId() < rhs.getId());
    }
};

#endif // HW2_COMPARATOR_ID_H
