///
/// @file    ReconstructorTPC.cxx
/// @author  Barthelemy von Haller
///

#include <iostream>
#include "ReconstructorTPC.h"

namespace AliceO2 {
namespace TPC {

void ReconstructorTPC::greet()
{
  std::cout << "ProjB world!!" << std::endl;
}

int ReconstructorTPC::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace TPC
} // namespace AliceO2
