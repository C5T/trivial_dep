#include "trivial_dep.h"

std::string const& TrivialDep() {
  static std::string s = "This is the trivial dep.";
  return s;
}
