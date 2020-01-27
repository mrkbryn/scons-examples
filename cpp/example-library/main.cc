#include <iostream>

std::string generate_output(std::string input)
{
  return "Hello, " + input;
}

void usage() {
  std::cout << "Usage:" << std::endl;
  std::cout << "\tmain <name>" << std::endl;
}

int main(int argc, char *argv[]) {
  if (argc == 1) {
    usage();
    return 1;
  }
  
  std::cout << generate_output(argv[1]) << std::endl;
  return 0;
}
