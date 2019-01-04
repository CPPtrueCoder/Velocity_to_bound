//
//  Header.h
//  Velocity to bound1
//
//  Created by Andrew on 04.01.2019.
//  Copyright © 2019 Andrew. All rights reserved.
//

#ifndef Coordinate_hpp
#define Coordinate_hpp
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using std::vector;
using Point = double;
using Coordinates = std::vector<Point>;
void Velocity_to_bound(const Coordinates &velo_vec, Coordinates &bound,
                       double &Slip_angle, double &Attack_angle);
void Show_vec(const Coordinates &out_vec);
#endif /* Header_h */
