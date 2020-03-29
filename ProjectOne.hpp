#ifndef PROJECTONE_HPP
#define PROJECTONE_HPP

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

vector<int> ParseLine(string line);
void ReadBoardFile(string path);
void PrintBoard(const vector<vector<int>> board);

#endif /* PROJECTONE_HPP */
