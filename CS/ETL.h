#ifndef ETL_h
#define ETL_h

#include <iostream>
#include <fstream>
#include <eigen3/Eigen/Demse>

class ETL
{
    std::string dataset;
    std::string delimeter;
    bool header;

public:
    ETL(std::string data,std::string separator, bool head) dataset(data)
    {}
}
#endif