#ifndef EX2__EXCEPTIONS_H_
#define EX2__EXCEPTIONS_H_

#include <iostream>
using namespace std;

#define ERROR -1
#define SUCCESS 0
#define QUANTUM_ERR_MSG "A none-positive quantum was given."
#define TIMER_ERR_MSG "Failed setting the timer."
#define SIGSET_ERR_MSG "Failed setting a signal."
#define MAX_THREAD_ERR_MSG "Exceeded max amount of threads."
#define SIGACT_ERR_MSG "Failed inspecting or handling signal."
#define INVALID_FUNC_ERR_MSG "Invalid function given as input."
#define MEM_ERR_MSG "Memory error."
#define INVALID_TID_ERR_MSG "Invalid Thread ID."
#define MAIN_THREAD_BLOCK_ERR_MSG "Attempted to block Main Thread."
#define MAIN_THREAD_SLEEP_ERR_MSG "Attempted to sleep Main Thread."
#define SYS_ERR_MSG "system error: "
#define LIB_ERR_MSG "thread library error: "

/**
 * Enum describing the different error type origins.
 */
enum ERR_TYPE{
    LIB_ERR,
    SYS_ERR
};

/**
 * Enum containing all possible errors.
 */
enum ERR_KIND{
    QUANTUM_ERR,
    TIMER_ERR,
    SIGSET_ERR,
    MAX_THREAD_ERR,
    SIGACT_ERR,
    INVALID_FUNC_ERR,
    MEM_ERR,
    INVALID_TID_ERR,
    MAIN_THREAD_BLOCK_ERR,
    MAIN_THREAD_SLEEP_ERR,
};

/**
 * This class represents all possible exceptions and categorizes them according to their origin and type.
 */
class Exception{
 public:
  /**
   * Constructor for type of error, recieves error kind and concludes errors
   * type and relevant error message.
   */
  explicit Exception(ERR_KIND);

  /**
   * Prints error message upon demand.
   */
  void print_error();

  ERR_TYPE get_type();

 private:
  ERR_TYPE _type; //type of error.
  ERR_KIND _kind; // kind of error.
  string _message; // message to be printed when error occurs.
};


#endif //EX2__EXCEPTIONS_H_



