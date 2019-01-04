#include "Header.hpp"
int main() {
    double Attack_angle=Input_angle();
    double Slip_angle=Input_angle();
    vector velo_vec = Input_vector();
    vector bound_vec =Velocity_to_bound(velo_vec, Attack_angle, Slip_angle);
    Show_vec(bound_vec);
}
