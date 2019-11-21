//
//  arrayCounter.cpp
//  input and output
//
//  Created by Josiah Turnquist on 11/19/19.
//  Copyright © 2019 NightLabs. All rights reserved.
//
#include "arrayCounter.hpp"
#include <iostream>

using namespace std;


void printArrays(int arr1[], int arr2[], int SIZE) {
    cout << "\nTypes:  ";
    for (int k = 0; k < SIZE; ++k) {
        cout << arr1[k] << " ";
    }
    cout << endl;
    cout << "Counts: ";
    for (int k = 0; k < SIZE; ++k) {
        cout << arr2[k] << " ";
    }
}

// returns the number with the highest frequency
int isolateFrequency(int arr[], int freq[], int size) {
    int cap = 0, capPos = 0;
    for (int i = 0; i < size - 1; ++i) {
        if (freq[i] > cap) {
            cap = freq[i];
            capPos = i;
        }
    }
    return arr[capPos];
}

int findMostFrequent (int values[], const int SIZE) {
    const int SENTINEL = -1;
    
    int arrTypes[SIZE];
    int arrCounts[SIZE];
    
    // initialize original arrays.
    for (int i = 0; i < SIZE; ++i) {
        arrTypes[i] = SENTINEL;
    }
    for (int i = 0; i < SIZE; ++i) {
        arrCounts[i] = 0;
    }
        
    //printArrays(arrTypes, arrCounts, SIZE);
    
    //cout << "Beginning array check.\n";
    for (int origArrPos = 0; origArrPos < SIZE; ++origArrPos) {
        // check if value has already been found to exist within types array
        bool accomplished = false;
        int foundPos = -1;
        
        // compare original value with each value in the types array until found. If found, set found = true and i to its location.
        for (int i = 0; i < SIZE; ++i) {
            // check if value is already in the types array.
            if (accomplished == false && arrTypes[i] == values[origArrPos]) {
                //cout << "Value '" << values[origArrPos] << "' found at pos " << i << " in arrTypes array.\n";
                accomplished = true;
                foundPos = i;
            }
            
            // check if empty spot is found.
            if (accomplished == false && arrTypes[i] == SENTINEL) {
                // found it! Add the value there.
                arrTypes[i] = values[origArrPos];
                //cout << "Added '" << values[origArrPos] << "' to the arrTypes array at pos " << i << ".\n";
                foundPos = i;
                accomplished = true;
            }
        }
        arrCounts[foundPos] += 1;


    }
    
    //printArrays(arrTypes, arrCounts, SIZE);
    return isolateFrequency(values, arrCounts, SIZE);
}
    
