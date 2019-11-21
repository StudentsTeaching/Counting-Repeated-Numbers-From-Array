//
//  Count the repetitions of a number in an array.
//
//  Created by iosiah Turnquist on 11/12/19.
//  Copyright © 2019 NightLabs. All rights reserved.
//

#include <iostream>
#include "arrayCounter.hpp"

using namespace std;


int main() {
    int array[] = {1, 4, 1, 3, 2, 3, 4, 5, 6, 11, 2, 999, 55, 4, 55, 24, 54, 2};
    int* arrPtr = array;
    cout << "Most repeated number: " << findMostFrequent(array, 18);
    cout << "\nMost repeated number (pointer): " << findMostFrequent(arrPtr, 18);

    cout << "\nProgram terminating.\n";
    return 0;
}

