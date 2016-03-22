///
/// @file    Foo.cxx
/// @author  Barthelemy von Haller
///

#include "../../GlobalTracking/include/Foo.h"

#include <iostream>

namespace AliceO2 {
namespace ProjB {

void Foo::greet()
{
  std::cout << "ProjB world!!" << std::endl;
}

int Foo::returnsN(int n)
{

  /// \todo This is how you can markup a todo in your code that will show up in the documentation of your project.
  /// \bug This is how you annotate a bug in your code.
  return n;
}

} // namespace ProjB
} // namespace AliceO2
