///
/// @file    SimulatorXYZ.cxx
/// @author  Barthelemy von Haller
///

#include "SimulatorXYZ.h"

#include <iostream>

namespace AliceO2 {
namespace XYZ {

void SimulatorXYZ::greet()
{
  std::cout << "Hello SimulatorXYZ" << std::endl;
}

int SimulatorXYZ::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace ProjectTemplate
