#include<iostream>
#pragma once

using namespace std;

struct vector_3D
{
    double x; // 3 coordinates
    double y;
    double z;

    vector_3D(); // constructor
    ~vector_3D(); // destructor
    vector_3D(double x, double y, double z); //parametrized constructor
    vector_3D(const vector_3D &v); //copy constuctor

    vector_3D sum_vector(vector_3D v); //methods
    vector_3D mutliple_vector(float n);
    vector_3D cross_product(vector_3D v);  // this vector has 90 degree with respect to vector v
    int scalar_product(vector_3D v);
    void vector();
};
