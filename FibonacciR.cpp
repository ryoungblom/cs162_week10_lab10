/*********************************************************************
 ** Program name: FibonacciR.cpp
 ** Author: reuben youngblom
 ** Date: 3/19/17
 ** Description: cpp file for recursive Fibonacci sequence
 *********************************************************************/

#include "FibonacciR.hpp"
#include <iostream>


FibonacciR::FibonacciR() {
  }

  FibonacciR::FibonacciR(const int &n):n_(&n){
  }

  FibonacciR::~FibonacciR() {
  }

  int FibonacciR::Fibonacci(const int &n){
  	if(n==0)  //tracks rounds
  		return 0;
  	else if(n==1)  //if 1, return 1
  		return 1;
  	return Fibonacci(n-1) + Fibonacci(n-2);  //finds recursively, by calling number
  }
  void FibonacciR::PrintFibonacci(){
  	int FibonaciNum=Fibonacci(*n_);  //creates int, calls recursively
  	std::cout<< *n_ << "th fibonaci number: "<<FibonaciNum<<std::endl;
  }