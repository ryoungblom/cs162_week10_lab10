/*********************************************************************
 ** Program name: FibonacciNR.hpp
 ** Author: reuben youngblom
 ** Date: 3/19/17
 ** Description: header file for Fibonacci sequence
 *********************************************************************/


/*********************************************************************

 general comment:  I adapted this code from the resources given in the assignment.  
 Thus, I have commented as best I can.
 
 *********************************************************************/

using namespace std;



class FibonacciNR

{
  public:
  	FibonacciNR(const int &n);  //takes in number of fibonacci numbers to go up to
  	virtual ~FibonacciNR();  //virtual function
  	void PrintFibonacci();  //prints result
  private:
  	FibonacciNR();  //function to find number
  	int Fibonacci(const int &n);  //takes in number to go up to
  	const int* n_;  //pointer to number
  };