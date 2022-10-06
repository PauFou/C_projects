#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
Objective

Race Simulator
On your mark, get set, GO! Using structures and
the rest of your C knowledge we’ll be creating a
race simulator.

First we’ll define our complex data types using
structures. Then we’ll create some fun print
functions to help update our audience. Finally,
we’ll implement functions to help with the racing
 logic and start our race!
*/


// Structures section
struct Race {
  int numberOfLaps;
  int currentLap;
  char firstPlaceDriverName[20];
  char firstPlaceRaceCarColor[20];
};

struct RaceCar{
  char driverName[20];
  char raceCarColor[20];
  int totalLapTime;
};
// Print functions section

void printFirstPlaceAfterLap(struct Race* racePtr){
  printf("\n\nAfter lap number %d\nFirst Place Is: %s in the %s!", racePtr->currentLap, racePtr->firstPlaceDriverName, racePtr->firstPlaceRaceCarColor);
}

void printCountDown(){
  printf("Racers Ready! In...\n5\n4\n3\n2\n1\nRace!\n");
  }

void printCongratulation(struct Race* racePtr){
  printf("%s\n", racePtr->firstPlaceDriverName);
  printf("\n\n\nLet's all congratulate %s in the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!", racePtr->firstPlaceDriverName, racePtr->firstPlaceRaceCarColor );
}

int calculateTimeToCompleteLap(){
  int acceleration = rand() % 3 + 1;
  int nerves = rand() % 3 + 1;
  int speed = rand() % 3 + 1;
  return acceleration + nerves + speed;
}

void updateRaceCar(struct RaceCar* raceCarPtr){
  raceCarPtr->totalLapTime = calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* racePtr, struct RaceCar* raceCar1Ptr ,struct RaceCar* raceCar2Ptr){
  if(raceCar1Ptr->totalLapTime < raceCar2Ptr->totalLapTime){
    strcpy(racePtr->firstPlaceDriverName, raceCar1Ptr->driverName);
    strcpy(racePtr->firstPlaceRaceCarColor, raceCar1Ptr->raceCarColor);
  } else {
    strcpy(racePtr->firstPlaceDriverName, raceCar2Ptr->driverName);
    strcpy(racePtr->firstPlaceRaceCarColor, raceCar2Ptr->raceCarColor);
  }
}

void startRace(struct RaceCar* raceCar1Ptr ,struct RaceCar* raceCar2Ptr){
  struct Race race = {5, 1, "", ""};
  for(int i = 0; i < race.numberOfLaps; i++){
    updateRaceCar(raceCar1Ptr);
    updateRaceCar(raceCar2Ptr);
    updateFirstPlace(&race, raceCar1Ptr, raceCar2Ptr);
    printFirstPlaceAfterLap(&race);
    race.currentLap++;
  }
  printCongratulation(&race);
}
// Logic functions section

int main() {
	srand(time(0));
  struct RaceCar raceCar1 = {"McChaussette", "Yellow"};
  struct RaceCar raceCar2 = {"HarryPotter", "Brown"};
  printf("Welcome to our main event digital race fans!\n\nI hope everybody has their snacks because we are about to begin!\n\n\n");
  printCountDown();
  startRace(&raceCar1, &raceCar2);
};
