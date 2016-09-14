#include "evalfun.h"
#include <iostream>


using namespace std;

const int limit = 100;


double myEvalFun(int *vec)
{
int divCount = 5;
int blockItems = limit/divCount;
int counter = 0;

for(int i = 0; i < divCount; i++)
	{
	
	for(int j = blockItems * i ;j < blockItems * (i+1) ;j++){
                if(i%2 == 0)
                {
                    if(vec[j] == 0)
                    {counter++;}

                } 
                else 
                {
                    if(vec[j] == 1)
                    {counter++;}
                } 
            

       		}//for blocks
	}//for div

	return counter;
}



