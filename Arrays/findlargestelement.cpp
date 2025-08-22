#include<bits/stdc++.h>
using namespace std;
int findLargestElement(int arr[], int n) {
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  int max = findLargestElement(arr, n);
  cout << "The largest element in the array is: " << max << endl;
  return 0;
}
