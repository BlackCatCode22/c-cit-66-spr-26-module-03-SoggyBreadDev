#include <iostream>

int main()
{
    int arraysAreEasy[3][3][3] = {
        {
            {1, 2, 3},
            {1, 2, 3},
            {1, 2, 3}
        },
        {
                {1, 2, 3},
                {1, 2, 3},
                {1, 2, 3}
        },
    {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    }


    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                std::cout << arraysAreEasy[i][j][k] << '\n';
            }
        }
    }

    return 0;
}
