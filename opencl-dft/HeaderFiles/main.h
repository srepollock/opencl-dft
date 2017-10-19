#pragma once
#ifdef __APPLE__
#include "CL/opencl.h"
#elif defined _WIN32 || defined _WIN64
#include "CL\opencl.h"
#endif
#include <iostream>
#include <thread>
#include <chrono>