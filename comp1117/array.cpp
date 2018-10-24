// SHIM Hyunju
// UID: 3035345693
#include <iostream>
#include "array.h"
using namespace std;

Array::Array(int s)
{
    size = s;
    // The constructor creates a dynamic array v[s][s], and set size to s.
    v = new int*[s];
    for (int i = 0; i < s; i++)
        v[i] = new int[s];
    // Initialize all entries v[i][j] to 0
    for (int i = 0; i < s; i++)
        for (int j = 0; j < s; j++)
            v[i][j] = 0;
}

Array::~Array()
{
    // The destructor deletes v.
    for (int i = 0; i < size; i++)
        delete [] v[i];
    delete [] v;
}

void Array::transpose()
{
// Replace v by the transpose of v
    int **vt = new int*[size];
    for (int i = 0; i < size; i++)
        vt[i] = new int[size];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            vt[i][j] = v[j][i];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            v[i][j] = vt[i][j];
}

int Array::trace()
{
    int sum = 0;
    // return the sum of the diagonal elements of A
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                sum = sum + v[i][j];
        }
    return sum;
}

int Array::get(int i, int j)
{
// return v[i][j], the element at row i, column j
    return v[i][j];
}

int Array::get_size()
{
    //return the size of this array
    return size;
}

void Array::set(int i, int j, int value)
{
// set v[i][j] to value
    v[i][j] = value;
}

void Array::operator +=(Array &B)
{
//replace v by the sum of v and B.v
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            v[i][j] = v[i][j] + B.v[i][j];
}

void Array::operator -=(Array &B)
{
    //replace v by the sum of v and B.v (i.e. v - B.v)
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            v[i][j] = v[i][j] - B.v[i][j];
}

void Array::operator *=(Array &B)
{
    //replace v by the product of v and B.v
    int size = get_size();
    int C[size][size];
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            C[i][j] = 0;

    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            for (int k = 0; k < size; ++k)
                C[i][j] += v[i][k] * B.v[k][j];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            v[i][j] = C[i][j];
}

bool Array::operator ==(Array &B)
{
//return true if v[i][j] is equal to B.v[i][j] for all i, j in [0,size-1]; otherwise return false
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (v[i][j] != B.v[i][j])
                return false;
        }
    return true;
}
