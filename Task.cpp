#include <iostream>
#include <vector>
using namespace std;

class Task
{
public:
    // function returns minimum element
    int getMinimum(std::vector<int> vector)
    {
        int min = vector[0];
        for (int i = 1; i < vector.size(); i++)
        {
            if (min > vector[i])
            {
                min = vector[i];
            }
        }
        return min;
    }
    // Function that calculates average of a specific vector
    double getAverage(std::vector<int> vector)
    {
        double average = 0;
        int sum = getSum(vector);
        average = (double)sum / vector.size();
        return average;
    }
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
    int minimumElement = task.getMinimum(vector);
    double average = task.getAverage(vector);
    std::cout << "Sum Result: " << sumResult << std::endl;
    std::cout << "Minimum Element: " << minimumElement << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;
}
