#include <iostream>
#include <vector>
using namespace std;

class Task
{
public:
    // Function calculates sum of a specifc vector
    int getSum(std::vector<int> vector)
    {
        int sum = 0;
        for (int i = 0; i < vector.size(); i++)
        {
            sum = sum + vector[i];
        }

        return sum;
    }
};
int main()
{
    Task task;
    std::vector<int> vector = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int sumResult = task.getSum(vector);
    std::cout << "Sum Result: " << sumResult << std::endl;

    return 0;
}
