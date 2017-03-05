/********************************
 * Hasan Niftiyev
 * CSC 600 - Homework 2
Problem 4: Integer Plot Function

Write a program BigInt(n) that displays an arbitrary positive integer n using big
characters of size 7x7, as in the following example for BigInt(170):
   @@ @@@@@@@ @@@@@
  @@@      @@ @@ @@
   @@      @@ @@ @@
   @@      @@ @@ @@
   @@      @@ @@ @@
   @@      @@ @@ @@
 @@@@@@    @@ @@@@@
 
 * ******************************/

using namespace std;
#include <iostream>
#include <string>
#define SIZE 7


void bigInt (int);
string digitPrint(int);

int main (){
 
 bigInt(170);

 return 0;

}



void bigInt (int number){

	int reverseDigits[SIZE];
	int number_length = 0;

	while(number){

		reverseDigits[++number_length] = number % 10;
		number /= 10;
	}

	for (int digit = number_length - 1; digit >= 0 ; digit --){

		cout << digitPrint(reverseDigits[digit]);
	}
}

string digitPrint(int digit){

	string output = NULL;

	switch (digit) {

		case 0: 
				output = "   @@@@@"
						  +"@@@@@@@"
						  +"@@   @@"
						  +"@@   @@"
					      +"@@   @@"
					      +"@@@@@@@"
					       +"@@@@@   " ; break ;

		case 1: 
				output = "     @@"
						  + "@@@@"
						  +   "@@"
						  +   "@@"
						  +   "@@"
						  +   "@@"
						  +"@@@@@@@  " ; break ;

		case 2: 
				output = "   @@@@@ "
                          +"@@   @@"
                              +"@@@"
                             +"@@@" 
                            +"@@"   
                          +"@@@@@@@"
                          +"@@@@@@@  " ; break ;
		
		case 3: 
				output = "   @@@@@" 
                          +"@@   @@"
                               +"@@"
                             +"@@@" 
                             +"@@@@"
                          +"@@   @@"
                           +"@@@@@ " ; break ;
		
		case 4: 
				output = "      @@ "
                             +"@@@ "
                            +"@ @@ "
                           +"@  @@ "
                          +"@@@@@@@"
                              +"@@ "
                             +"@@@@ " ; break ;

		case 5: 
				output = "  @@@@@@@"
                          +"@@ "    
                          +"@@@@@@ "
                               +"@@"
                               +"@@"
                          +"@@   @@"
                           +"@@@@@   " ; break ;
		
		case 6: 
				output = "  @@@@@@"
                          +"@@    @"
                          +"@@  "   
                          +"@@@@@@ "
                          +"@@   @@"
                          +"@@   @@"
                          +" @@@@@   " ; break ;

		case 7: 
				output = "  @@@@@@"
                          +"@@   @@"
                          +"    @@" 
                          +"   @@"  
                          +"  @@"   
                          +"@@@"    
                          +"@@       " ; break ;

        case 8: 
        		output = "   @@@@@ "
                          +"@@   @@"
                          +"@@   @@"
                          +" @@@@@ "
                          +"@@   @@"
                          +"@@   @@"
                          +" @@@@@   " ; break ;
		case 9: 
				output = "   @@@@@ "
                          +"@@   @@"
                          +"@@   @@"
                          +" @@@@@ "
                          +"     @@"
                          +"@@   @@"
                           +"@@@@@   " ; break ;
	
	    default: 
	    		cout << "Invalid Digit !" ; break ;

	}

	return output;
}


