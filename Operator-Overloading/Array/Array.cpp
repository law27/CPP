//
// Created by lawrance on 22/02/20.
#include <iostream>
#include <iomanip>
#include "Array.h"
using namespace std ;

ostream& operator<<( ostream& output ,const Array& array)
{
    int i ;
    for( i = 0; i < array.size ; i++)
    {
        output << setw(12 ) << array.ptr[i] ;

        if( (i + 1 ) % 4 == 0)
            cout << endl ;
    }
    if( (i + 1 ) % 4 != 0)
        cout << endl ;
    return output ;
}

istream &operator>>( istream& input , Array& array)
{
    for( int i = 0 ; i < array.size ; i++)
        input >> array.ptr[i] ;
    return input ;
}

Array::Array( int size )
{
    this->size = size ;
    ptr = new int[size] { 0 };
}

Array::Array( const Array& array)
{
    this->size = array.size ;
    ptr = new int[array.size] ;

    for( int i = 0 ; i < array.size ; i++)
        ptr[i] = array.ptr[i] ;
}

Array::~Array()
{
    delete [] ptr ;
}

int Array::getSize() const
{
    return this->size ;
}

const Array& Array::operator=(const Array &array)
{
    if ( array != *this )
    {
        if( this->size != array.size)
        {
            delete [] ptr ;
            size = array.size ;
            ptr = new int[size] ;
        }

        for( int i = 0 ; i < size ; i++)
            ptr[i] = array.ptr[i] ;
    }
    return *this ;
}

bool Array::operator==(const Array &array) const
{
    if( this->size != array.size)
        return false ;

    for(int i = 0 ; i < size ; i++)
    {
        if( array.ptr[i] != ptr[i])
            return false ;
    }
    return true ;
}

int& Array::operator[](int subscript)
{
    if( subscript < 0 || subscript > this->size)
        throw out_of_range("Out of Range") ;
    else
        return ptr[subscript] ;
}

int Array::operator[](int subscript) const
{
    if( subscript < 0 || subscript > this->size)
        throw out_of_range("Out of Range") ;
    else
        return ptr[subscript] ;
}