#include <iostream>
#include <vector>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
  
  const double HZ_limit = 20000.0;
  
  std::vector<double> harmonics;
  double fund {atof(argv[1])};
  int partials {1};
  
  while (fund * partials <= HZ_limit) {
    harmonics.push_back(fund * partials);
    partials += 1;
  }
  for (double i: harmonics)
      std::cout << i << ' ';
  
  return 0;
}
