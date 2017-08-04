/*********************************************************************
 ** Program name: FibonacciR.hpp
 ** Author: reuben youngblom
 ** Date: 3/19/17
 ** Description: header file for recursive Fibonacci sequence
 *********************************************************************/

class FibonacciR {
  public:
  	FibonacciR(const int &n);
  	virtual ~FibonacciR();
  	void PrintFibonacci();
  private:
  	FibonacciR();
  	int Fibonacci(const int &n);
  	const int *n_;
  };