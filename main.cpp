#include <iostream>
#include "modify.h"
#include "evalfun.h"

using namespace std;



int main()
{
	int limit = 100;
	int vec[limit];

	double maxFitness = 0.0,fitness = 0.0,minFitness = 101;
	int tryNum = 5;
	int *bestValues,*worstValues;

	for(int i = 1; i < limit/2; i++){

		for(int j = 0; j < 2;j++){
			modify(vec,i,j);
			fitness = myEvalFun(vec);

			if(fitness > maxFitness){

				maxFitness = fitness;
				bestValues = intdup(vec,100);

			}
			else if(minFitness > fitness){
				minFitness = fitness;
				worstValues = intdup(vec,100);
			}


		}

	}



	cout << "Best Fitness is" << maxFitness << endl;
	cout << "Values are" << endl;
	for(int index = 0; index < 100;index++){
		cout << bestValues[index];
	}
	cout << endl;
	cout << "Worst Fitness is" << minFitness << endl;
	cout << "Values are" << endl;
	for(int index = 0; index < 100;index++){
		cout << worstValues[index];
	}
	cout << endl;


}

