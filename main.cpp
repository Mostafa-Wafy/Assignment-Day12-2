#include <iostream>
#include <vector>
using namespace std;
int getSum(vector<int>&vect)
{
    int sum=0;
    for(int i=0;i<vect.size();i++){
        sum+=vect[i];
    }
    return sum;
}
int main(){
    vector<int> vect(10,7);
    int sum=getSum(vect);
    cout<<sum<<endl;
    return 0;
}