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
#include <math.h>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv15 {
                //radixsort: all functions

                template<typename T>
                int getdigits(T number) {
                    //DEBUG:
                    std::cout << " number = " << number << std::endl;
                    if (number == 0) {
                        return (1);
                    }else{
                        int numdig = 0;
                        while(number!=0){
                            numdig++;
                            number/=10;
                        }
                        //DEBUG:
                        std::cout << "number of digits = " << numdig << "\n" << std::endl;
                        return(numdig);
                    }
                }

                template<typename T>
                int maxdigits(T array[], size_t size){
                    int maximum = 0;
                    for(int i=0; i<size; i++){
                        int temp = getdigits(array[i]);
                        if(temp > maximum){
                            maximum = temp;
                        }
                    }
                    return(maximum);

                }


                //int overload
                int lowdig(int number, int pow){
                    return(abs((number/pow)%10));
                }

                //templated overload
                template<typename T>
                int lowdig(T number, int pow){
                    return((number/pow)%10);
                }

                template<typename T>
                void clear(T** buckets, size_t width,size_t  size){
                    //delete "buckets"
                    for(int i = 0; i<width; i++){
                        delete [] buckets[i];
                    }
                    delete [] buckets;
                    buckets = NULL;
                    //DEBUG
                    std::cout << "goodbye, buckets.... (strong bad voice) DELETED" << std::endl;

                }

                template<typename T>
                void radixsort(T array[], size_t size){
                    //DEBUG: print unsorted input array
                    std::cout << "unsorted:" << std::endl;
                    for(int i = 0; i<size; i++){
                        std::cout << "[" << array[i] << "]" << std::endl;
                    }
                    std::cout << "\n \n" ;

                    int max = maxdigits(array, size);
                    //DEBUG:
                    std::cout << "max = " << max << std::endl;
                    int pow10 = pow(10, 0);  //just being fancy
                    std::cout << "pow10 = " << pow10 << std::endl;
                    //http://www.cplusplus.com/reference/cmath/pow/


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
                            buckets[i][j]=NULL;
                        }
                    }
                    //DEBUG: print buckets, no values given
                    std::cout << "buckets, empty:" << std::endl;
                    for(int i = 0; i<width; i++){
                        std::cout << " bucket " << i << ": ";
                        for(int j = 0; j<height; j++) {
                            std::cout << " [" << buckets[i][j] << "] ";
                        }
                        std::cout << std::endl;
                        std::cout << std::endl;
                    }

                    for(int i = 0; i < max; i++ ){
                        for(int j = 0; j < size; j++){
                            //DEBUG:
                            std::cout << "array [" << j << "] = " << array[j];
                            int buckPlace = lowdig(array[j], pow10);
                            std::cout << ", and bucket place is '" << buckPlace << "' " << std::endl;
                        }
                    }



                    clear(buckets, width, size);
                }
            }
        }
    }
}

#endif //EX05_RADIXSORT_RADIXSORT_H
