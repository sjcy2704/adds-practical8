#include <iostream>
#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
  std::priority_queue<int> pq;
  int size = values.size();

  for (int i = 0; i < size; i++) {
    pq.push(values.at(i));
  }

  for (int i = 0; i < k - 1; i++) {
    pq.pop();
  }

  return pq.top();
}
