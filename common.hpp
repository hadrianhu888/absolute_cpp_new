/**
 * @file common.hpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef COMMON_HPP
#define COMMON_HPP

#ifdef __cplusplus

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <fstream> 
#include <sstream>
#include <map>
#include <set>
#include <iterator>
#include <functional>
#include <cctype>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cassert>
#include <memory>
#include <utility>
#include <limits>
#include <typeinfo>
#include <stdexcept>
#include <exception>
#include <new>
#include <initializer_list>
#include <tuple>
#include <array>
#include <regex>
#include <chrono>
#include <random>
#include <thread>
#include <future>
#include <atomic> 
#include <bitset> 
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <exception>

using namespace std;
using namespace std::chrono;

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator (seed);
std::uniform_int_distribution<int> distribution(1,100);

#endif

#endif /* COMMON_HPP */


