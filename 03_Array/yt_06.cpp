// Merge Sort Algorithm

#include <iostream>
#include <vector>

void merge(std::vector<int> &arr, int start, int mid, int end) {
  std::vector<int> temp;
  int i = start, j = mid + 1;

  while (i <= mid && j <= end) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }

  while (j <= end) {
    temp.push_back(arr[j]);
    j++;
  }

  for (int idx = 0; idx < temp.size(); idx++) {
    arr[idx + start] = temp[idx];
  }
}

void mergeSort(std::vector<int> &arr, int start, int end) {
  if (start == end) {
    return;
  }

  int mid = start + (end - start) / 2;

  mergeSort(arr, start, mid);   // for left half
  mergeSort(arr, mid + 1, end); // for right half

  merge(arr, start, mid, end);
}

int main() {
  std::vector<int> arr = {12, 31, 35, 8, 32, 17};

  mergeSort(arr, 0, arr.size() - 1);

  for (int val : arr) {
    std::cout << val << " ";
  }
  std::cout << std::endl;
}