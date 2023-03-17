#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

/* Head ends here */

void insertionSort(vector <int>  ar) {

    int to_be_sorted = *( ar.end() - 1);
    int i ;
    for (i = ar.size(); i > 1; --i) {
        if(to_be_sorted < ar[i-2]) {
            ar[i-1] = ar[i-2];
            for (int j = 0; j < ar.size(); ++j) {
                cout << ar[j] << " ";
            }
            cout << endl;
        }
        else {
            break;
        }
    }
        ar[i-1] = to_be_sorted;
            for (int j = 0; j < ar.size(); ++j) {
                cout << ar[j] << " ";
            }
            cout << endl;
}


/* Tail starts here */
int main() {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
   
   return 0;
}
