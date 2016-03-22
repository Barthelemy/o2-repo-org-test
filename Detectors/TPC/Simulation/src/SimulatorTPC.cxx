///
/// @file    SimulatorTPC.cxx
/// @author  Barthelemy von Haller
///

#include <iostream>
#include "../include/SimulatorTPC.h"

namespace AliceO2 {
namespace TPC {

void SimulatorTPC::greet()
{
  std::cout << "Hello SimulatorTPC" << std::endl;
}

int SimulatorTPC::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace ProjectTemplate
