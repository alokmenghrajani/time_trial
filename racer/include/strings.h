#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <boost/regex.hpp>

std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems, unsigned int count);
std::vector<std::string> split(const std::string &s, char delim, unsigned int count);
bool get_first_capture(const boost::regex &ex, const std::string st, std::string &capture);
