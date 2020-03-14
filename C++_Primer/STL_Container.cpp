#include <iostream>
#include <algorithm>
#include <iterator>
#include <queue>
#include <vector>
#include <list>
using namespace std;

//Generic Function to print All type of Containers
template<typename T , typename Iterator >
void printContainer(  Iterator start , Iterator end )
{
    ostream_iterator<T> output( cout , " ") ;
    copy( start , end , output);
    cout << "\n" ;
}

_List_const_iterator<double> fifthIterator(list<double >& l)
{
    auto iter = l.begin() ;
    for(auto i = 0 ; i < 5 ; i++)
    {
        iter++ ;
    }
    return iter ;
}


int main()
{
    vector< int > v ;
    list< double > l ;
    //Operations in vector
    int *arr = new int[10] { 1 ,2 ,3 ,4 ,5 ,6 ,7 ,8,9, 10};
    v.insert(v.begin() , arr , arr+10) ;
    v.push_back(22) ;
    cout << "Elements in the vector Container" << endl ;
    printContainer< int , vector<int>::const_iterator> ( v.begin() , v.end()) ;
    cout << "Printing Vector in the Reverse Order" << endl ;
    printContainer< int , vector<int>::const_reverse_iterator > ( v.rbegin() , v.rend()) ;
    cout << "Size of the Vector: " << v.size() << endl ;
    cout << "Capacity of the Vector: " << v.capacity() << endl ;
    /* Other Functions in Vector
     * *> .at( int )
     * *> .clear( void )
     * *> .erase( random_access iterator )
     * *> .empty()
     * *> .count( int )
     */

    //Operations in list
    cout << "\n\n\n" ;
    auto *arr2 = new double[10] { 7.2 , 5.4 , 3.5 , 2.9 , 1.2 , 4.4 , 6.7 , 8.9 , 0.2, 9.6};
    l.insert( l.begin() , arr2 , arr2 + 10) ;
    l.push_back(  13.3) ;
    l.push_front( 0.7) ;
    cout << "Elements in the list: " << endl ;
    printContainer< double , list< double >::const_iterator>( l.begin() , l.end()) ;
    l.sort() ;
    cout << "After Sorting: " << endl;
    printContainer< double , list< double >::const_iterator>( l.begin() , l.end()) ;
    list < double > tempList(l) ;
    l.clear() ;
    cout << "After deleting all the elements in list" << endl;
    cout << "Size of the list l after clearing: " << l.size() << endl ;
    l.splice( l.end() , tempList) ;
    cout << "After Splicing :" << " tempList size: " << tempList.size()  << endl ;
    printContainer< double , list< double >::const_iterator>( l.begin() , l.end()) ;
    tempList.insert( tempList.begin() , arr2 , arr2+5 ) ;
    l.erase( fifthIterator(l),  l.end()) ;
    cout << "Print tempList: " << endl ;
    printContainer< double , list< double >::const_iterator>( tempList.begin() , tempList.end()) ;
    cout << "Print l: " << endl ;
    printContainer< double , list< double >::const_iterator>( l.begin() , l.end()) ;
    cout << "After Merging l & tempList " << endl ;
    l.merge(tempList) ;
    printContainer< double , list< double >::const_iterator>( l.begin() , l.end()) ;
    /* Other functions in List
     * *> .unique() --> removes duplicate elements
     * *> .swap( list& container ) --> swaps elements between containers
     * *> .assign( iterator1 , iterator2 ) --> replaces elements
     * *> .remove( int )
     */

    //Deque container have all the Features present in both list and vector
    //So it is not included in this File
    return 0 ;
}
