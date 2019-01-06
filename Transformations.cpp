

#include "Transformation.hpp"

double Input_angle()
{   std::cout<<"Get the Attack angle and Slip angle ";
    double angle=0.0 ;
    using std::cin;
    using std::cout;
    
    while (true){
        if (cin>>angle){
            return angle ;
        }
        else{
            cout<< " Bad value , input no symbols"<<std::endl;
            cin.clear();
            cin.get();
            continue;
        }
    }
    return angle ;
}
vector Input_vector()
{   auto size  =3;
    std::cout<<" Get the coordinates of vector: ";
    vector your_vector(size);
    for (int line = 0 ; line<size;++line)
    {
        std::cin>>your_vector[line];
    }
    return your_vector;
}
vector  Velocity_to_bound (const vector &velo_vec,double trans_matr[3][3] ,double Attack_angle , double Slip_angle )
{   const int size = 3;
    vector bound_vec(size);

    for (int line=0;line<size;++line){
        for (int col=0;col<size;++col){
            
            bound_vec[line]+=trans_matr[line][col]*velo_vec[col];
        }
    }
    return bound_vec;
}

void Show_vec (const vector &vector){
    for (auto coordinate : vector)
        std::cout<<coordinate<<std::endl;
}
void Input_matrix (double trans_matr[SIZE][SIZE],double Attack_angle,double Slip_angle)
{
    trans_matr[0][0]=cos(Attack_angle)*cos(Slip_angle);
    trans_matr[0][1]=sin(Attack_angle);
    trans_matr[0][2]=-cos(Attack_angle)*sin(Slip_angle);
    trans_matr[1][0]=-sin(Attack_angle)*cos(Slip_angle);
    trans_matr[1][1]=cos(Attack_angle);
    trans_matr[1][2]=sin(Attack_angle)*sin(Slip_angle);
    trans_matr[2][0]=sin(Slip_angle);
    trans_matr[2][1]=0.0;
    trans_matr[2][2]=cos(Slip_angle);
}
