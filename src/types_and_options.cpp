// lww 20181115

#include <Eigen/Dense>
#include <Eigen/Core>
#include <iostream>
#include <complex>
#include <Eigen/SVD>

int main(int argc, char** argv) {
  // basic types
  Eigen::Matrix<double, 3, 2> mat32;
  mat32 << 1.1,2.2,3.3,4.4,5.5,6.6;
  std::cout << "mat32:" << std::endl << mat32<< std::endl;

  Eigen::MatrixXd matx32(3,2);
  matx32 = mat32;
  std::cout << "matx32:" << std::endl << matx32<< std::endl;

  Eigen::MatrixXi mati32(3,2);
  mati32 = mat32.cast<int>();
  std::cout << "mati32:" << std::endl << mati32<< std::endl;

  Eigen::Matrix4f mat4f = Eigen::Matrix4f::Identity();
  std::cout << "mat4f:" << std::endl << mat4f<< std::endl;

  mat4f = Eigen::Matrix4f::Random();
  std::cout << "randomed mat4f:" << std::endl << mat4f<< std::endl;

  Eigen::MatrixXcd matcd(4,4);
  matcd.real() = Eigen::Matrix4d::Zero();
  matcd.imag() = Eigen::Matrix4d::Ones();
  std::cout << "mat4cd:" << std::endl << matcd<< std::endl;
 
  Eigen::VectorXd v3d = Eigen::VectorXd::LinSpaced(3,1,10);
  std::cout << "v3d:" << std::endl << v3d<< std::endl;

  // basic operations
  //std::cout << "matx32 + 10:" << std::endl << matx32 + 10.
  //  << std::endl;
  //std::cout << "matx32 - 10:" << std::endl << matx32 - 10.
  //  << std::endl;
  mat32 = (mat32.array() + 10).matrix();
  std::cout << "add 10 mat32 : " << std::endl << mat32<< std::endl;

  std::cout << "matx32 * 10:" << std::endl << matx32 * 10<< std::endl;
  std::cout << "matx32 / 10:" << std::endl << matx32 / 10<< std::endl;
  std::cout << "matx32 + mat32:" << std::endl << matx32 + mat32<< std::endl;
  

  // operations
  std::cout << "------------------OPERATIONS-------------------"<<std::endl;
  matx32.resize(2,3);
  std::cout << "resized mat32 : " << std::endl << matx32<< std::endl;
  std::cout << "Eigen Dynamic \n" << Eigen::Dynamic << std::endl;
   
  std::cout << "colwise add :\n" << mat32.colwise() + v3d << std::endl;
  //mat32.inverse();
  std::cout << "mat32 reverse :\n" << mat32.reverse() << std::endl;
  
  std::cout << "mat32 squared norm :\n" << mat32.squaredNorm() << std::endl;

  std::cout << "mat32 norm :\n" << mat32.norm() << std::endl;
  std::cout << "v3d dot v3d :\n" << v3d.dot(v3d) << std::endl;

  
  std::cout << "mat4f * mat4f :\n" << mat4f * mat4f << std::endl;
  // std::cout << "mat4f / mat4f :\n" << mat4f / mat4f << std::endl;
  std::cout << "mat4f eig :\n" << mat4f.eigenvalues() << std::endl;

}

