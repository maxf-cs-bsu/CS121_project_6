# File IO Algorithm
### data.csv
```
first, create me

1, 2, this
3, 3, is
8, 1, a
2, 4, lot
2, 1, of
4, 2, fun
```
### fileIO.cpp
```
include fstream, iostream, sstream

int main()
  create a ifstream
  make a stringstream with te name of "ss"
  make varibles for the data with intA, intB, text
  repeat process with temp varibles (tempA, tempB, tempText)
  
  create a string line for the current line in data.csv
  open data.csv in a ifstream object
  while( able to read a currentLine)
    read until "," and put the result into intA
    do the same for intB
    now read the last part of the line and put it into text

    clear stringstream

    put intA, intB in a stringstream with spaces inbetween
    output the stringstream into intA and intB to convert into data
    
    add the numbers of intA and intB into a sum
    for(i = 0, i < sum; i++) 
      print text
```
