// Copyright 2016 Tishkin Konstantin

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string>
#include <sstream>
#include "include/Application.h"
#include "include/TElasticity.h"


Application::Application() : message_("") { }
using std::string;
std::ostringstream stream;


void Application::help(const char *appname, const char *message) {
    message_ =
        string(message) +
        "This is an elasticity of demand application.\n\n" +
        "Please provide arguments in the following format:\n\n" +

        "  $ " + appname
        + " <Q1> <Q0> <P1> <P0>";
}

bool Application::validateNumberOfArguments(int argc, const char **argv) {
    if (argc == 1) {
        help(argv[0]);
        return false;
    }
    if (argc != 1) {
        if (argc != 5) {
            help(argv[0], "ERROR: Should be 4 arguments.\n\n");
            return false;
        }
    }
    return true;
}

int parseInt(const char *arg) {
    char *end;
    int value = strtol(arg, &end, 10);

    if (end[0]) {
        throw std::string("Wrong number format!");
    }

    return value;
}

std::string Application::operator()(const int argc, const char **argv) {
    Arguments args;

    if (!validateNumberOfArguments(argc, argv)) {
        return message_;
    }
    try {
        args.Q1 = parseInt(argv[1]);
        args.Q0 = parseInt(argv[2]);
        args.P1 = parseInt(argv[3]);
		args.P0 = parseInt(argv[4]);
    }
    catch (std::string str) {
        return str;
    }

    message_ = stream.str();

    return message_;

}
