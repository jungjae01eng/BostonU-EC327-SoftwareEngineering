#include "mode.h"
#include <iostream>
#include <fstream>

void findModes (int input[], int size, int& frequency, int result[], int& result_count) 
{
	// Takes in the input, finds the mode(s), and stores the results in the result array.
	
	// Find frequency
	int i = 0;		// counter for input[]
	int counter = 0;	// counter for inputsave[]
	int inputsave[10];
	int inputcounter[10];
	//int counter2 = 0;	// counter for inputcounter[]

	inputsave[counter] = input[i];
	inputcounter[counter] += 1;

	do {
		i++;

		do { // each input compare each inputsave
			if (i >= counter) {
				if (input[i] != inputsave[counter]) {
					counter ++;
				} else if (input[i] == inputsave[counter]) {
					inputsave[counter] = input[i];
					inputcount[counter] += 1;
					break;				
			} else if (i < counter) {
				inputsave[counter] = input[i];
				inputcount[counter] += 1;
				break;
			} 
		} while (true);

		if (i == size){
			break;
		}
	} while (true);


	do {
		counter = 0;
		int counter2 = 1;
		if (inputcount[counter] >= inputcount[counter2]) {
			result[counter] = inputcounter[counter];
			counter++;
		
			




return;
}


int main()
{

}
