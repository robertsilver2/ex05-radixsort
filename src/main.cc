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
    uint64_t array[] = {1819, 778, 1761, 471, 65, 604, 302, 1300, 299, 1603, 202};
    //array generated @ https://www.random.org/integer-sets/
    size_t size = 25;
    radixsort(array, size);
}
