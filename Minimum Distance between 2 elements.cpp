#include<iostream>
using namespace std;
int findMinDistance(int A[], int n, int x, int y) {
   int i = 0;
   int distance = INT_MAX;
   int prev_index;
   for (i = 0; i < n; i++) {
      if (A[i] == x || A[i] == y) {
         prev_index = i;
         break;
      }
   }
   while (i < n) {
      if (A[i] == x || A[i] == y) {
         if ( A[prev_index] != A[i] && (i - prev_index) < distance ){
            distance = i - prev_index;
            prev_index = i;
         } else
            prev_index = i;
      }
      i++;
   }
   return distance;
}
int main() {
   int arr[] = {2, 5, 3, 5, 4, 4, 2, 3};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 3;
   int y = 2;
   cout << "Minimum distance between " << x << " and " << y << " is: "<< findMinDistance(arr, n, x, y);
}
