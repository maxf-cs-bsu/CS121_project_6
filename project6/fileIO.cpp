#include <iostream>
#include <fstream>
#include <sstream>

int main(){
  std::fstream inFile;
  std::stringstream ss;

  int intA;
  int intB;

  std::string tempintA;
  std::string tempintB;
  std::string text;
  std::string currentLine;

  inFile.open("data.csv");
  while(getline(inFile, currentLine)){
    ss.clear();
    ss.str("");

    std::getline(ss, tempintA, ',');
    std::getline(ss, tempintB, ',');
    std::getline(ss, text);

    // copy temp strings to ss separated by a space
    ss.clear();
    ss.str("");
    
    ss << tempintA << " " << tempintB;
    ss >> intA >> intB;
    int sum = intA + intB;

    for(int i = 0; i < sum; i++){
      std::cout << text;
    }

  } // end of while

  return 0;
} // end of main
