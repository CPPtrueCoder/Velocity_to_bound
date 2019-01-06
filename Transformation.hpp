
#ifndef Transformation_hpp
#define Transformation_hpp
#include <iostream>
#include <vector>
#include <cmath>
using point =double ;
const int SIZE =3;
const double Pi =3.14159265;
using vector = std::vector<point>;
double Input_angle() ;
vector Input_vector();
void Input_matrix (double trans_matr[SIZE][SIZE],double Attack_angle,double Slip_angle);
vector  Velocity_to_bound (const vector &velo_vec,double trans_matr[3][3] ,double Attack_angle , double Slip_angle );
void Show_vec (const vector &vector);
#endif

