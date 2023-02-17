#include <iostream>
#include <vector>

int getSum(std::vector<int> arr)
{
    int length = arr.size();
    int sum=0;
    for(int i =0; i < length;i++)
    {
        sum+= arr[i];
    }
    return sum;
}

int main()
{
    std::vector<int> arr ={1,2,3,4,5,6,7,8,9,10};
    std::cout<<"The sum of the vector is: "<<getSum(arr)<<std::endl;
    return 0;
}