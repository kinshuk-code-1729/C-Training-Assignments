#include<iostream>
using namespace std;
float series_result(int n) {
   float denominator = 1;
   float res = 0;
   for(int i = 1; i<= n; i++) {
      denominator *= i;
      res += float(i/denominator);
   }
   return res;
}
main() {
   int n;
   cout << "Enter number of terms: ";
   cin >> n;
   cout << "Result: " << series_result(n);
}