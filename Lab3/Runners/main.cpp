#include <stdio.h>
#include <vector>
#include "racer.h"
#include "utilities.h"

using std::vector;

int main(int argc, char **argv)
{
    vector<Racer> racers;
    int startTime = 0;
    int totalSensors;
    double raceDistance;
    
	printf("hello world\n");
    
    
    readFile(racers, startTime, totalSensors, raceDistance);
    std::cout << startTime << std::endl;
    std::cout << totalSensors << std::endl;
    std::cout << raceDistance << std::endl;
}
