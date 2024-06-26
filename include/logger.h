/*
 * Author: Babacar (https://stackoverflow.com/users/3599371)
 */

#ifndef LOGGER_H
#define LOGGER_H

/**
 * \file logger.h
 *
 * Defines some useful logging functions.
 */

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdarg.h>


#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

void log_error(const char* message, ...);

void log_info(const char* message, ...);

void log_debug(const char* message, ...);

#endif /* LOGGER_H */
