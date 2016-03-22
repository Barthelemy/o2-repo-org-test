///
/// @file    ReconstructorITS.cxx
/// @author  Barthelemy von Haller
///

#include <iostream>
#include "../include/ReconstructorITS.h"

namespace AliceO2 {
namespace ITS {

void ReconstructorITS::greet()
{
  std::cout << "Hello ReconstructorITS" << std::endl;
}

int ReconstructorITS::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace ProjectTemplate
