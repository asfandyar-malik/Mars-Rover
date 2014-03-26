/**
 * Instruction ifl header class
 */

#ifndef _INSTRUCTION_IFL_HH
#define _INSTRUCTION_IFL_HH

#include <vector>
#include <string>

#include "InstructionIF.hh"

class Instruction_ifl : public InstructionIF {
private:
	int argc;
	std::vector< std::string > args;
public:
    // Constructors and destructors
	/**
     * @brief Public constructor of Instruction_ifl class
     * @param  ret   Address in memory to write return value to.
     * @param  args  Vector of arguments needed for instruction.
     */
	Instruction_ifl(int* ret, std::vector< std::string > _args);
	~Instruction_ifl();

	/**
	* @brief Method to execute the ifl instruction of the Brain File
	* @param  memoryLocation    Pointer to MemoryHandler for memory management.
    * @param  instrPointer      Pointer to desired instruction.
    * @return If successful, 0, 1 otherwise.
	 */
	int execute(MemoryHandler* memoryLocation,int* instructionPointer);
};

 #endif