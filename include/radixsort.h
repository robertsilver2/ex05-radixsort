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
                    //DEBUG: print unsorted input array
                    std::cout << "unsorted:" << std::endl;
                    for(int i = 0; i<size; i++){
                        std::cout << "[" << array[i] << "]" << std::endl;
                    }
                    std::cout << "\n \n" ;
                    //Following: multi dimensional array info from:
                    //http://www.cplusplus.com/doc/tutorial/arrays/

                    /* notes on dynamic array allocation
                     *--single dimension:
                     *http://www.fredosaurus.com/notes-cpp/newdelete/50dynamalloc.html
                     *--2d:
                     * https://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new/936702#936702
                     *Look at answer by Mehrdad Afshari
                     */

                    //Initialize dynamic multidimensional array
                    size_t width = 10;
                    size_t height = size;
                    T** buckets = new T*[width];
                    for(int i = 0; i<width; i++){
                        buckets[i] = new T[height];
                        for(int j = 0; j<height; j++){
                            buckets[i][j]=0;
                        }
                    }

                    //DEBUG: print buckets, no values given
                    std::cout << "buckets, empty:" << std::endl;
                    for(int i = 0; i<width; i++){
                        for(int j = 0; j<height; j++) {
                            std::cout << " [" << buckets[i][j] << "] ";
                        }
                        std::cout << std::endl;
                        std::cout << std::endl;
                    }

                    //delete "buckets"
                    for(int i = 0; i<width; i++){
                        delete [] buckets[i];
                    }
                    delete [] buckets;
                    buckets = NULL;
                    //DEBUG
                    std::cout << "goodbye, buckets.... (strong bad voice) DELETED" << std::endl;





                }
            }
        }
    }
}

#endif //EX05_RADIXSORT_RADIXSORT_H
