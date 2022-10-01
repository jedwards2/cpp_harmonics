#include <iostream>
#include <vector>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
  
  const double HZ_limit = 20000.0;
  
  std::vector<double> harmonics;
  double fund {atof(argv[1])};
  int partial {1};
  
  while (fund * partial <= HZ_limit) {
    harmonics.push_back(fund * partial);
    partial += 1;
  }
  for (double i: harmonics)
      std::cout << i << ' ';
  
  return 0;
}
