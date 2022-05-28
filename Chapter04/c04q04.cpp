/**
 * @file    c04q04.cpp
 * @author  P. Williams <mrpwilliams80@gmail.com>
 * @brief   Write a short program to simulate a ball being dropped off of a 
 *          tower. To start, the user should be asked for the height of the 
 *          tower in meters. Assume normal gravity (9.8 m/s^2), and that the ball 
 *          has no initial velocity (the ball is not moving to start). Have the 
 *          program output the height of the ball above the ground after 0, 1, 
 *          2, 3, 4, and 5 seconds. The ball should not go underneath the ground 
 *          (height 0).
 *          Use a function to calculate the height of the ball after x seconds. 
 *          The function can calculate how far the ball has fallen after x 
 *          seconds using the following formula: distance fallen = 
 *          gravity_constant * x_seconds^2 / 2
 *          Desired output:
 * 
 *          Enter the height of the tower in meters: 100
 *          At 0 seconds, the ball is at height: 100 meters
 *          At 1 seconds, the ball is at height: 95.1 meters
 *          At 2 seconds, the ball is at height: 80.4 meters
 *          At 3 seconds, the ball is at height: 55.9 meters
 *          At 4 seconds, the ball is at height: 21.6 meters
 *          At 5 seconds, the ball is on the ground.
 * @version 0.5.1
 * @date    2022-05-08
 */

#include <iostream>

double getTowerHeight();
void calcHeightOfBall(int t, double h);
void printCurrentHeight(int t, double h);

/**
 * @brief   Get the Tower Height object from user
 * 
 * @return double The height of the tower
 */
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double x {};
    std::cin >> x;
    return x;
}

/**
 * @brief   Calculate the height of the ball above ground after falling for time 
 *          t from a tower of height towerHeight
 * 
 * @param t Time is seconds that has elapsed
 * @param h Starting height in meters, height of the tower
 * @return double Distance remaining between the ball and ground
 */
void calcHeightOfBall(int t, double h)
{
    constexpr double GRAV {9.8};
    printCurrentHeight(t, h - ((GRAV * t * t) / 2));
}

/**
 * @brief   Prints a message giving the balls current height from the ground, h, 
 *          after time in seconds, t.
 * 
 * @param t Time in seconds ball has been falling
 * @param h Height in meters ball is above ground.
 */
void printCurrentHeight(int t, double h)
{
    if (h <= 0.0)
        std::cout << "At " << t << " seconds, the ball is on the ground.\n";
    else
        std::cout << "At " << t << " seconds, the ball is at height: " << h << " meters\n";
}

int main ()
{
    double h {};
    h = getTowerHeight();
    calcHeightOfBall(0, h);
    calcHeightOfBall(1, h);
    calcHeightOfBall(2, h);
    calcHeightOfBall(3, h);
    calcHeightOfBall(4, h);
    calcHeightOfBall(5, h);

    return 0;
}