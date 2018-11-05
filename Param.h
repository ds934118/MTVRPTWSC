//
// Created by kevin on 2018/8/13.
//

#ifndef MTVRPTWSC_PARAM_H
#define MTVRPTWSC_PARAM_H

#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

#include "Route.h"
#include "Customer.h"
#include "TimeWindow.h"
#include "Car.h"
#include "Scenario.h"
#include "Link.h"
#include "Chromosome.h"

using namespace std;
static const int CurrentBestValue = 9999999;
static const float PriorityThresholdValue = 0.5;

static const int NumberOfVehicle = 15;
static const int NumberOfVehicle2 = 3;
static const int CapacityOfVehicle = 3;
static const float PenalizationFactor = 10;
static const int serviceTime = 8;

static int NumberOfDeterministicCustomers = 0;
static int NumberOfStochasticCustomers = 0;

static const int NumberOfChromosome = 10;

static const unsigned int NumberOfGeneration = 500;

extern std::vector<int> Lbound; // ai.txt
extern std::vector<int> Ubound; // bi.txt
extern std::vector<int> Lbound2; // ai2.txt
extern std::vector<int> Ubound2; // bi2.txt
extern std::vector<std::vector<int>> distanceMatrix; // distance matrix.txt
extern std::vector<std::vector<float>> costMatrix; // travel cost matrix.txt
extern std::vector<std::vector<float>> timeMatrix; // travel time matrix.txt

#endif //MTVRPTWSC_PARAM_H
