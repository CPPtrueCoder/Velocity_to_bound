


#ifndef Header_hpp
#define Header_hpp
#include <iostream>
#include <vector>
#include <cmath>
using point =double ;
using vector = std::vector<point>;
double Input_angle() ;
vector Input_vector();
vector Velocity_to_bound ( const vector &velo_vec, double Attack_angle,double Slip_angle);
void Show_vec (const vector &vector);
#endif
