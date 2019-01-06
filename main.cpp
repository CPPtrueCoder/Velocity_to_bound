#include "Transformation.hpp"
int main() {
    double Attack_angle=Input_angle()*Pi/180;
    double Slip_angle=Input_angle()*Pi/180;
    double trans_matr[SIZE][SIZE];
    memset(trans_matr,0,sizeof(trans_matr));
    vector velo_vec = Input_vector();
    Input_matrix (trans_matr,Attack_angle,Slip_angle);
    vector bound_vec = Velocity_to_bound(velo_vec, trans_matr ,Attack_angle, Slip_angle);
    Show_vec(bound_vec);
}

