#include <iostream>
#include <fstream>

#include "matrix.h"
#include "logger.h"
#include "matrix_logger.h"

int main()
{
    Matrix mat1(3, 3);
    Logger log(std::string("matrix.txt"));

    log << mat1;

    return 0;
}