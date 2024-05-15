/* DO NOT TOUCH!!!! This file is autogenerated by make, and should not be modified directly. */
#ifndef PUBFUNCS_H_INCLUDED
#define PUBFUNCS_H_INCLUDED

extern void initializeGenerator();
extern int *generateUnboundedNumberOfIntegers(int numberOfIntegers);
extern int *generateUpperBoundedNumberOfIntegers(int numberOfIntegers, int bound);
extern int *generateLowerBoundedNumberOfIntegers(int numberOfIntegers, int bound);
extern int *generateBoundedNumberOfIntegers(int numberOfIntegers, int lowerBound, int upperBound);
extern void printIntegerList(int *list, int length);
extern void throw(void (*printerFunction)(void*), ...);
extern void notImplementedError();
extern void missingArgumentError(char*);
extern void invalidDataTypeFlagError(byte);
extern void help();

#endif
