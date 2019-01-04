

#include <stdio.h>
#include <cmath>
#include "Coordinate.hpp"
void Velocity_to_bound(const Coordinates& velo_vec,
                       Coordinates& bound,
                       double& Slip_angle,
                       double& Attack_angle) {
  double Sp_Bou[3][3];
  Sp_Bou[0][0] = cos(Attack_angle) * cos(Slip_angle);
  Sp_Bou[0][1] = sin(Attack_angle);
  Sp_Bou[0][2] = -cos(Attack_angle) * sin(Slip_angle);
  Sp_Bou[1][0] = -sin(Attack_angle) * cos(Slip_angle);
  Sp_Bou[1][1] = cos(Attack_angle);
  Sp_Bou[1][2] = sin(Attack_angle) * sin(Slip_angle);
  Sp_Bou[2][0] = sin(Slip_angle);
  Sp_Bou[2][1] = 0.0;
  Sp_Bou[2][2] = cos(Slip_angle);

  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      bound[i] += Sp_Bou[i][j] * velo_vec[j];
    }
  }
}
void Show_vec(const Coordinates& out_vec) {
  for (auto Coordinate : out_vec)
    std::cout << Coordinate << std::endl;
}
