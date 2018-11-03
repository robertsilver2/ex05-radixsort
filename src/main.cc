/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex03-fibonacci
 *
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @robertsilver2
 */

#include <iostream>
#include "radixsort.h"
using edu::vcccd::vc::csv15::radixsort;

int main(int argc, char *argv[]){
    uint64_t array[] = {8, 6, 7, 5, 3, 0, 9};
    uint64_t searchTarget = 6;
    radixsort(array, searchTarget);
}
