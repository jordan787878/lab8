#include <iostream>
#include <cstdlib>
#include <new>
#include "MinoI.h"
using namespace std;
int main()
{
  int n = 50;
  MinoI * minoptr[n];

  try{
       for(int i = 0;i<n;i++)
       {
         minoptr[i] = new MinoI[50000000];
         cout << "mino[" <<  i+1 << "] new Success!" << endl;
       }
  }catch(bad_alloc &memoryAlloc){
   cerr << "Exception: " << memoryAlloc.what() << endl;

  }

/* for (int i=0;i<3;i++) {
   Mino * test = genMino();
   test->paint();
   delete test;
 } */

  

return 0;
}
