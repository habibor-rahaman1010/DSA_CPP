#include <iostream>
#include <vector>

std::vector<int> execute_algorithm(int n) {
  std::vector<int> sequence;
  while (n != 1) {
    sequence.push_back(n);
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
  }
  sequence.push_back(1);
  return sequence;
}

int main() {
    int n;
    std::cin>> n;
  std::vector<int> sequence = execute_algorithm(n);
  for (int i : sequence) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
