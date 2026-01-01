#include <iostream>
#include <vector>
using namespace std;

int main () {
   // Deklarasi ddengan nilai awal
   // vector<int> nilai;  // Inisialisasi dengan nilai

   // nilai.push_back(10);

   int arr[3] = {100,200,300};
   vector<int> vec;

   vec.push_back(10);
   vec.push_back(arr[1]);

   cout << vec[1];


}