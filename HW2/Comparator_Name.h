/********************************************
 * ComparatorName class header file. 
 * Contains definition of member function used to create
 * comparable name function object.
 * 
 * Author: Alina Burlacu
 * Version: 06152022
 *********************************************/
#ifndef HW2_COMPARATOR_NAME_H
#define HW2_COMPARATOR_NAME_H

// ComparatorName class declaration & definition

class ComparatorName
{
public:
    bool isLessThan(const Student &lhs, const Student &rhs)
    {
        std::string nameLhs = (lhs.getLastName() + lhs.getFirstName());
        std::string nameRhs = (rhs.getLastName() + lhs.getFirstName());

        return (nameLhs < nameRhs);
    }
};

#endif // HW2_COMPARATOR_NAME_H
