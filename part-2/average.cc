// Umer Anwar
// UmerAnwar@csu.fullerton.edu
// @UmerAnwar05
// Partners: @rickroldannn

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }
  double value = 0.0;
  for (std::string& argument : arguments) {
    if (argument == arguments.at(0)) {
      continue;
    }
    value = value + std::stod(argument);
  }
  double average = value / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average << std::endl;

  return 0;
}