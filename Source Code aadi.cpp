#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

#define NUMBERS_TO_GENERATE 500

int main() {
    
    std::srand(std::time(nullptr));
    std::ofstream outFile("random_xy.csv");
    if (!outFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    outFile << "X,Y" << std::endl; // here is Header row
    double x = 0.5; // Starting X from 0.5
    for (int i = 0; i < NUMBERS_TO_GENERATE; ++i) {
        int y = std::rand() % 75 + 1; // This Generates random number between 1 and 75
        outFile << x << "," << y << std::endl;
        x += 0.5; // This Increments X by 0.5 for the next value
    }

    // this function Closes the file
    outFile.close();

    std::cout << "Random numbers (X, Y) have been written to random_xy.csv" << std::endl;

    return 0;
}
