#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int n) {

  // loop to access each array element
  for (int j = 0; j < n; ++j) {
      
    // loop to compare array elements
    for (int i = 0; i < n - j - 1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << array[i];
    
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 5, 50, 11, -9};
  
  // find array's length
  int n = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, n);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, n);
}
