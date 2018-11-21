/**
 * CS V15 Data Structures and Algorithms
 * CRN: 70342
 * Assignment: ex05-radixsort
 *
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @robertsilver2
 */


#ifndef EX05_RADIXSORT_RADIXSORT_H
#define EX05_RADIXSORT_RADIXSORT_H

#include <cstdint>
#include <iostream>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv15 {

                template<typename T>
                void radixsort(T array[], size_t size){
                    //DEBUG: print array
                    for(int i = 0; i<size; i++){
                        std::cout << "[" << array[i] << "]" << std::endl;
                    }


                }
            }
        }
    }
}

#endif //EX05_RADIXSORT_RADIXSORT_H
