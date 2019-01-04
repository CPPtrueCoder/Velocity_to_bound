

#include <iostream>
#include "Coordinate.hpp"
int main() {
  using std::cout;
  using std::cin;
  int size = 3;
  Coordinates velo_vec(size);
  for (int i = 0; i < size; ++i) {
    cout << " Take the coordinate:";
    cin >> velo_vec[i];
  }
  Coordinates bound(size);
  cout << " Get the the slip angle:"
       << " ";
  double Slip_angle;
  cin >> Slip_angle;
  cout << "Get the angle of attack:"
       << " ";
  double Attack_angle;
  cin >> Attack_angle;
  Velocity_to_bound(velo_vec, bound, Slip_angle, Attack_angle);
  cout << " The velocity vector in bound system coordinate : ";
  Show_vec(bound);
  return 0;
}
