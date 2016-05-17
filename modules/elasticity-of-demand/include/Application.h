// Copyright 2016 Tishkin Konstantin

#ifndef MODULES_ELASTICITY_OF_DEMAND_INCLUDE_APPLICATION_H_
#define MODULES_ELASTICITY_OF_DEMAND_INCLUDE_APPLICATION_H_

#include <iostream>
#include "include/TElasticity.h"

class Application {
public:
    Application();
    std::string operator()(int argc, const char **argv);
private:
    void help(const char *appname, const char *message = "");
    bool validateNumberOfArguments(int argc, const char **argv);
    std::string message_;

    typedef struct {
        int Q1;
        int Q0;
        int P1;
        int P0;
        char operation;
    } Arguments;
};
#endif  // MODULES_ELASTICITY_OF_DEMAND_INCLUDE_APPLICATION_H_
