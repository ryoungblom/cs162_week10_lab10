/*********************************************************************
 ** Program name: main.cpp
 ** Author: reuben youngblom
 ** Date: 3/19/17
 ** Description: main file for Fibonacci sequence
 *********************************************************************/


/*********************************************************************

 general comment:  I adapted this code from the resources given in the assignment.
 thus, I have commented as best I can
 
 *********************************************************************/


#include <stdlib.h>
#include <iostream>
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */

#include "FibonacciR.hpp"
#include "FibonacciNR.hpp"
using namespace std;

void Usage(){
  	cout<<"Correct Usage:"<<endl;
  	cout<<"./Fibonacci [n]"<<endl;
  }

int main(int argc, char** args) {
  	
      //clock_t t;  //used to test clock
    
    //t = clock();  //used to test.  took time of both functions
    
    
    try{
  		const char* input; //Note: char by default initializes to '\0'
  		if(args[1]!=0)
  		{
  			cout<<"1st passed arguement: '"<<args[1]<<"'"<<endl;  //input validation
  			input= args[1];
  		}
        
        
   		int n= atoi(input);  //takes in input
        
        
        n = 50;  //however, I changed it here (but left the original intact)
        
        
  		cout<<"Finding '"<<n<<"'th "<<"fibonacci number...."<<endl;  //user info
  		
        cout<<"Calling Recursive Fibonacci implementation"<<endl; //user info
  		
        {

        clock_t p;  //creates clock
        
        p = clock();  //starts clock
            
        FibonacciR fr(n);  //runs function
  		fr.PrintFibonacci();  //prints function
            
        cout << "*********TIME***********" << endl;  //user info
        
        p = clock() - p;  //collects clicks
        printf ("It took me %d clicks (%f seconds).\n",p,((float)p)/CLOCKS_PER_SEC);  //prints time
        }
        
        cout<<"Calling Non-Recursive Fibonacci implementation"<<endl;  //user info

        {
            clock_t w;  //creates different clock
            
            w = clock();  //starts clock
            
        FibonacciNR fnr(n);  //calls function
  		
        fnr.PrintFibonacci();  //prints result
            
            cout << endl;
            cout << "*********TIME***********" << endl; //user info
            
            w = clock() - w;  //counts clicks
            
            printf ("It took me %d clicks (%f seconds).\n",w,((float)w)/CLOCKS_PER_SEC);  //prints result
            
        }
        
        
        cout << "Done!!!!" << endl; //user info
        
       // t = clock() - t;
       // printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
        

        
  		return 0;
  	}
    
  	catch(...) //user info
  	{
  		cout<<"Oops an error occured! Please check usage"<<endl;
  		Usage();
  		return 1;
  	}
    
    
    
}