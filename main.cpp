//myMinimum returns the minimum element in vector identified as vec.
#include <iostream>
#include <vector>
using namespace std;

int myMinimum(const vector<int> & vec) //vectors will have a reference value.
{
int smallest = vec[0]; 
for (int counter = 1; counter < vec.size(); counter++)
//we start the counter at 1 bc we start comparing at index 1.
{
    if (smallest < vec[counter]) //if true...
    {
        smallest = smallest; 
        //if the value is smaller than the new one, then that value is the smallest b/w the two.
    }
    else
    {
        smallest = vec[counter];
        //if false, smallest is now the original. 
    }
}//closes outer loop
return smallest;

}//close myMinimum function

int main ()
{
    vector<int> userVec = {1'000, 999, 45'000, 5};
    int smallestFinal = myMinimum(userVec);
    cout << smallestFinal; //should print out 5.
    return 0;
}
