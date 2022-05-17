/**
 * @file    c07_Xq01.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Take the program below and modify it so that the ball falls for as 
 *          many seconds as needed until it reaches the ground.
 * @version 0.2.0
 * @date    2022-05-17
 */

/* This works, but uses one loop and two branches - with both branches executing 
   every iteration. Refactoring reduced the number of branches to one - 
   see c07_Xq01.cpp */

#include <iostream>
#include "c07_Xq01_constants.h"

double calculateCurrentHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    return heightNow;
}

void printCurrentHeight(double currentHeight, int time)
{
    if (currentHeight < 0.0)
    {
        currentHeight = 0.0;
    }
    /* Makes more sense to have this test as part of calculateCurrentHeight() */

    std::cout   << "At " << time << " seconds, the ball is at height: " 
                << currentHeight << "\n";
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {};
    std::cin >> initialHeight;

    /* The lack of a logical test that will end the FOR loop after the ball has 
       hit the ground forces the addition of an additional and inefficient IF */
    for (int sec {0}; ; sec++)
    {
        double currentHeight {calculateCurrentHeight(initialHeight, sec)};
        printCurrentHeight(currentHeight, sec);
        if (currentHeight < 0.0)
        {
            break;
        }     
    }

    return 0;
}

