///
/// @file    ReconstructorTPC.cxx
/// @author  Barthelemy von Haller
///

#include <iostream>
#include "TPCReconstruction/Tracker.h"

namespace AliceO2 {
namespace TPC {

void Tracker::greet()
{
  std::cout << "ProjB world!!" << std::endl;
}

int Tracker::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace TPC
} // namespace AliceO2
