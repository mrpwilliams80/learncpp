/**
 * @file    c07_Xq01.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Take the program below and modify it so that the ball falls for as 
 *          many seconds as needed until it reaches the ground.
 * @version 0.2.1
 * @date    2022-05-17
 */
#include <iostream>
#include "c07_Xq01_constants.h"

double calculateCurrentHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    /* return height check to this function: better simulation - ball should 
       never have a height < 0 */
    if (heightNow < 0.0)
    {
        return 0.0; /* favour return over assignment: one less operation */
    }

    return heightNow;
}

bool printCurrentHeight(double initialHeight, int time)
{
    double currentHeight = calculateCurrentHeight(initialHeight, time);
    std::cout   << "At " << time << " seconds, the ball is at height: " 
                << currentHeight  << "\n";
    return currentHeight;
    /* use currentHeight as bool: false when 0 (on ground) */
}

int main()
{
    // prompt
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {};
    std::cin >> initialHeight;

    int time {0};

    while(printCurrentHeight(initialHeight, time))
    {
        ++time;
    }
    /* giving printCurrentHight a bool return, reduces the number of branches;
       with no good test in FOR() loop, required +IF(){break;} branch, tested 
       each iteration. */

    return 0;
}