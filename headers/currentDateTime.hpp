#pragma once


#include <string>




/*
 * To be completely honest, I (the author) do not fully understand this code to the extend I possible should,
 * but it does work entirely as I intend it to work.
 *
 * This function returns a string containing the current date and time in the following format:
 *     CCYY-MM-DD --- hh:mm:ss
 *
 * On Linux, the time is taken not directly from the system time, but rather from the time according to the
 * currently set timezone (usually, Linux-based OSs set system time to UTC regardless of timezone).
 * I have no idea how this will operate on Windows or Mac operating systems,
 * but it probably yields similar end results.
 */


const std::string currentDateTime();
