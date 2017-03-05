/********************************
 * Hasan Niftiyev
 * CSC 600 - Homework 2
 * Problem 1: Plateu prgram
 * ******************************/

using namespace std;
#include <iostream>
#include <string>

int maxlen(int array[] , int size ){

	int counter = 1;
	int maxCount = 1;

	for (int index=1 ; index < size ; index ++){

		if (array[index] ==  array[index-1]){       
			counter++;                              
			if (counter > maxCount)
				maxCount = counter;
		}
		
		else                                         
			counter = 1;
	}

	return maxCount;
}


int main (){
 
 int array[13]={1,1,1,2,3,3,5,6,6,6,6,7,9};
 int size = 13;

 cout << "The longest sequence is :" << maxlen(array,size) << endl;

 return 0;

}
