#include "ETL.h"
#include <iostream>
#include <string>
#include <eigen3/Eigen/Demse>
#include <boost/algorithm/string.hpp>
#include <vector>


int main(int argc, char *argv[]){
    ETL etl(argv[1],argv[2], argv[3]);
    std::vector<std::vector<std::string>> datset = etl.readCSV();

    return EXIT_SUCCESS;
}