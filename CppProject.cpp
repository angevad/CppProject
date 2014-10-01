//============================================================================
// Name        : CppProject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

int main(void) {
  std::vector<int> val;
  val.push_back(4);
	puts("Hello World!!!");
	std::cout << val.at(0) << std::endl;
	return EXIT_SUCCESS;
}
