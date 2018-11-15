// lww 20181115

#include <Eigen/Dense>
#include <Eigen/Core>
#include <iostream>

int main(int argc, char** argv) {
  Eigen::Matrix<double, 3, 2> mat32;
  mat32 << 1,2,3,4,5,6;
  std::cout << mat32 << std::endl;
}

