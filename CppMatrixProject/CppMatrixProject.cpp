#include <iostream>
#include <iomanip>

int main()
{
    const int rows{ 4 };
    const int cols{ 6 };

    int matrix[rows][cols];

    int count{ 0 };

    for (int i{}; i < rows; i++)
    {
        count += 10;
        for (int j{}; j < cols; j++)
            matrix[i][j] = ++count;
            //matrix[i][j] = (i + 1) * 10 + (j + 1);
        count -= cols;
    }
        

    for (int i{}; i < rows; i++)
    {
        for (int j{}; j < cols; j++)
            std::cout << std::setw(4) << matrix[i][j]; // << "\t";
        std::cout << "\n";
    }
        
    std::cout << "\n";

    /*bool f{ true };
    std::cout << std::boolalpha << f << std::endl;*/

}
