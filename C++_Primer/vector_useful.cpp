#include<iostream>
#include<vector>
using namespace std ;

vector<int>::const_iterator result(vector<int>::const_iterator beg , 
        vector<int>::const_iterator end,
        int val , 
        vector<int>::size_type &count )
{
    vector<int>::const_iterator req_iter = end ;
    for( ; beg != end ; beg++ )
    {
        if( *beg == val )
        {
            if( req_iter == end )
                req_iter = beg ;
            count++ ;
        }
    }
    return req_iter ;
}

int main()
{
    vector<int>check ;
    check.push_back(10) ;
    check.push_back(20) ;
    check.push_back(20) ;
    check.push_back(30) ;
    check.push_back(40) ;
    check.push_back(20) ;
    check.push_back(10) ;
    vector<int>::size_type i = 0 ;
    vector<int>::const_iterator answer = result(check.begin() , check.end() , 20 , i) ;
    cout << "The Requested value is:  " << *answer << endl ;
    cout << "And the Count is:  " << i << endl;
}
