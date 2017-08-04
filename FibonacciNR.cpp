/*********************************************************************
 ** Program name: FibonacciNR.cpp
 ** Author: reuben youngblom
 ** Date: 3/19/17
 ** Description: cpp file for Fibonacci sequence
 *********************************************************************/

#include "FibonacciNR.hpp"
#include <iostream>

  FibonacciNR::FibonacciNR() {

  }

  FibonacciNR::FibonacciNR(const int &n):n_(&n){

  }

  FibonacciNR::~FibonacciNR() {
  }

  int FibonacciNR::Fibonacci(const int &n)
  {
  	int first =0;
  	int second=1; //original values
  	int counter=2;
  	while(counter < n)
  	{
  		int temp=second;  //creates int temp
  		second=first+second;  //adds them together
  		first=temp;  //adds last first + temp (second)
  		++counter;
  	}
  	if(n==0)
  		return 0;
  	else
  		return first+second;  //adds them together to find non-recursively
  }
  void FibonacciNR::PrintFibonacci(){
  	const int result = Fibonacci(*n_);  //finds non-recursively
  	std::cout<<*n_<<"th fibonacci Number:"<<result<<std::endl;
  }