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

int getMin(std::vector<int> arr)
{
    int length = arr.size();
    int min=arr[0];
    for(int i =1; i < length;i++)
    {
        if(min> arr[i])
        min = arr[i];
    }
    return min;
}
float getAverage(std::vector<int> arr)
{
    int length = arr.size();
    return getSum(arr)/float(length);
}

int main()
{
    std::vector<int> arr ={1,2,3,4,5,6,7,8,9,10};
    std::cout<<"The sum of the vector is: "<<getSum(arr)<<std::endl;
    std::cout<<"The min of the vector is: "<<getMin(arr)<<std::endl;
    std::cout<<"The Average of the vector is: "<<getAverage(arr)<<std::endl;
    return 0;
}