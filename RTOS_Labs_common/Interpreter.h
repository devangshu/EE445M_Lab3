#ifndef INTERPRETER_H
#define INTERPRETER_H

/**
 * @file      Interpreter.h
 * @brief     Real Time Operating System for Labs 2, 3 and 4
 * @details   EE445M/EE380L.6
 * @version   V1.0
 * @author    Valvano
 * @copyright Copyright 2020 by Jonathan W. Valvano, valvano@mail.utexas.edu,
 * @warning   AS-IS
 * @note      For more information see  http://users.ece.utexas.edu/~valvano/
 * @date      Jan 5, 2020

 ******************************************************************************/


/**
 * @brief Displays Jitter information on the LCD
 * 
 * @param MaxJitter 
 * @param JitterSize 
 * @param JitterHistogram 
 */
void Jitter(int32_t MaxJitter, uint32_t const JitterSize, uint32_t JitterHistogram[]);


/**
 * @details  Run the user interface.
 * @param  none
 * @return none
 * @brief  Interpreter
 */
void Interpreter(void);

#endif
