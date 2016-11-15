#include <iostream>

using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size != b_size) 
        return false;
    else {
        for(int x=0;x<a_size;x++) {
            if (a[x] != b[x]) {
                cout<<a[x]<<" != "<<b[x]<<endl;
                return false;
            }
            else {
                cout<<a[x]<<" = "<<b[x]<<endl;
            }
        }
        return true;
    }
}

int main()
{
   
   int size = 12;
   int a[size] = {1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 100};
   int b[size] = {1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 100};
   //int sizea = (sizeof(a))/(sizeof(a[0]));
   //int sizeb = (sizeof(b))/(sizeof(b[0]));
   
   bool result = equals(a, size, b, size);
   if (result == 1) {
       cout << "Both arrays are the same" << endl;
   }
   else {
       cout << "Two arrays are different" << endl;
   }
   
   return 0;
}
