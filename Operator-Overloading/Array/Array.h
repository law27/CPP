//
// Created by lawrance on 22/02/20.
//

#ifndef THIS_POINTER_ARRAY_H
#define THIS_POINTER_ARRAY_H

#include <iostream>
using namespace std ;

class Array
{
    friend ostream& operator<<( ostream&  ,const Array& ) ;
    friend istream& operator>>( istream&  , Array& ) ;

public:
    explicit Array ( int = 10 ) ;
    Array ( const Array& ) ;
    ~Array() ;
    int getSize() const ;

    const Array& operator=( const Array&) ;
    bool operator==(const Array&) const ;

    bool operator!=(const Array& array) const
    {
        return ! ( *this == array ) ;
    }

    int &operator[] ( int ) ;
    int operator[] (int) const ;

private:
    int size ;
    int *ptr ;
};


#endif //THIS_POINTER_ARRAY_H
