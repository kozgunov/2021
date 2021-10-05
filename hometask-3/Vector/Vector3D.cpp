#include "vector3D.h"
#include<iostream>

// here I descrided methods and constructions from vector3D.h

vector_3D::vector_3D()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

vector_3D::vector_3D(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

vector_3D::~vector_3D() {}

vector_3D::vector_3D(const vector_3D &v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
}

vector_3D vector_3D::sum_vector(vector_3D v) // reutrn is necessary only for methods
{
    vector_3D sum;
    sum.x = x + v.x;
    sum.y = y + v.y;
    sum.z = z + v.z;
    return sum;
}

vector_3D vector_3D::mutliple_vector(float n)
{
    vector_3D muti;
    muti.x = x * n;
    muti.y = y *n;
    muti.z = z * n;
    return muti;
}

int vector_3D::scalar_product(vector_3D v)
{
    return x*v.x + y*v.y + z*v.z;
}

vector_3D vector_3D::cross_product(vector_3D v)
{
    vector_3D cross_product;
    cross_product.x = y * v.z - v.y * z;
    cross_product.y = z * v.x - v.z * x;
    cross_product.z = x * v.y - v.x * y;
    return cross_product;
}

void vector_3D::vector()
{
    cout << "vector(" << x << "," << y << "," << z << ")" << std::endl;
    return;
}
