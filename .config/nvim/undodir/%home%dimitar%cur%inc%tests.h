Vim�UnDo� P� �F	�O�˟���[��׈�+��ww��1                    .   -   .   .   *    d��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             df�    �                 #ifndef MAIN_H   #define MAIN_H       #include <assert.h>   #include <limits.h>   #include <stdint.h>       )#define LEN(ARR) sizeof ARR / sizeof *ARR       typedef __uint128_t uint128_t;   typedef struct {     const uint128_t XY[2];     const float RESULT;   } test;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testMedium(void);   !void avalancheEffect(const test);       #endif�               5��                          w              w      �                                   w              5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             dh�    �               void testMedium(void);5��       	              	   ?             	       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dh�     �             �             5��                          P                     5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             dh�     �               void testAvalanche(void);5��       	       	          Y      	              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dh�    �               void testShiftRow(void);5��                         a                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             di(     �               #include <stdint.h>5��                         Z                      �                          [                      �                        \                     �       
                 e                     �       
                 e                     �       
              
   e              
       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             di2     �               #include "shiftRows"5��                        j                     5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             di4     �               #include "shift-rows"5��                         o                      5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                                             di<     �                 #ifndef MAIN_H   #define MAIN_H       #include <assert.h>   #include <limits.h>   #include <stdint.h>   #include "shift-rows.h"       )#define LEN(ARR) sizeof ARR / sizeof *ARR       typedef __uint128_t uint128_t;   typedef struct {     const uint128_t XY[2];     const float RESULT;   } test;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   !void avalancheEffect(const test);       #endif�               5��                          �              �      �                                   �              5�_�   	              
      
    ����                                                                                                                                                                                                                                                                                                                                                             diC    �               #include "shift-rows.h"5��       
                  )                      5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             diU     �                  #ifndef MAIN_H   #define MAIN_H       #include "../inc/shift-rows.h"   #include <assert.h>   #include <limits.h>   #include <stdint.h>       )#define LEN(ARR) sizeof ARR / sizeof *ARR       typedef __uint128_t uint128_t;   typedef struct {     const uint128_t XY[2];     const float RESULT;   } test;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   !void avalancheEffect(const test);       #endif5�5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             diX     �                #ifndef MAIN_H5��                                              �        	                 	                     �                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             di_    �               #define MAIN_H5��                                             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             dj2     �   
             typedef __uint128_t uint128_t;5��    
                      �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             djV    �             �             5��                          !                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             dk�     �   
             5��    
                      �                      �                          �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             dk�     �                5��                          �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dl     �               uint32_t LEN(uint8_t* ARR) 5��                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dl     �               uint32_t LENG(uint8_t* ARR) 5��                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dl     �               uint32_t LENG(uint8_t* ARR) {}5��                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dl     �               uint32_t LENG(uint8_t* ARR) {5��                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                            
          
   )       v   )    dl
     �               	  return �             �               uint32_t LENGTH(uint8_t* ARR) {5��                         �                      �                       	   �               	       �       	                  �                      �       !                                       �       !                                       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 v       dl     �               uint32_t LENGTH(uint8_t* ARR) {   "  return sizeof ARR / sizeof *ARR;   }5��                        �       '               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       dl     �               uint32_t LENGTH(uint8_t* ARR)5��                         �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       dl     �                 #ifndef TESTS_H   #define TESTS_H       #include "../inc/aes.h"   #include "../inc/shift-rows.h"   #include <assert.h>   #include <limits.h>   #include <stdint.h>       )#define LEN(ARR) sizeof ARR / sizeof *ARR       uint32_t LENGTH(uint8_t* ARR);       typedef struct {     const uint128_t XY[2];     const float RESULT;   } test;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   !void avalancheEffect(const test);       #endif�               5��                          �              �      �                                   �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       dl    �                 #ifndef TESTS_H   #define TESTS_H       #include "../inc/aes.h"   #include "../inc/shift-rows.h"   #include <assert.h>   #include <limits.h>   #include <stdint.h>       )#define LEN(ARR) sizeof ARR / sizeof *ARR       uint32_t LENGTH(uint8_t *ARR);       typedef struct {     const uint128_t XY[2];     const float RESULT;   } test;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   !void avalancheEffect(const test);       #endif�               5��                          �              �      �                                   �              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       dl`     �                uint32_t LENGTH(uint8_t *ARR);5��                          �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       dla     �                 5��                          �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       dla    �                 #ifndef TESTS_H   #define TESTS_H       #include "../inc/aes.h"   #include "../inc/shift-rows.h"   #include <assert.h>   #include <limits.h>   #include <stdint.h>       )#define LEN(ARR) sizeof ARR / sizeof *ARR       typedef struct {     const uint128_t XY[2];     const float RESULT;   } test;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   !void avalancheEffect(const test);       #endif�               5��                          �              �      �                                   �              5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             dn�     �   	   
          )#define LEN(ARR) sizeof ARR / sizeof *ARR5��    	                      �       *               5�_�                     
        ����                                                                                                                                                                                                                                                                                                                                                             dn�     �      
              �   	             5��                          �                      5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             do     �               } test;5��                     
   �              
       5�_�       "           !           ����                                                                                                                                                                                                                                                                                                                                                             do(     �               !void avalancheEffect(const test);5��                        }                    5�_�   !   #           "      (    ����                                                                                                                                                                                                                                                                                                                                                             do*   	 �               )void avalancheEffect(const AvalancheTest;5��       (                  �                     5�_�   "   $           #           ����                                                                                                                                                                                                                                                                                                                                                             d��     �             �             5��                          X                      5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                             d��     �               #include "../inc/shift-rows.h"5��                        i                     5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             d��     �               #include "../inc/sbox-rows.h"5��                         n                      5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                                                             d��     �               #include "../inc/sbox-.h"5��                         m                      5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                                             d��   
 �                 #ifndef TESTS_H   #define TESTS_H       #include "../inc/aes.h"   #include "../inc/shift-rows.h"   #include "../inc/sbox.h"   #include <assert.h>   #include <limits.h>   #include <stdint.h>       typedef struct {     const uint128_t XY[2];     const float RESULT;   } AvalancheTest;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   *void avalancheEffect(const AvalancheTest);       #endif�               5��                          �              �      �                                   �              5�_�   '   )           (           ����                                                                                                                                                                                                                                                                                                                                                             d��     �             �             5��                          {                     5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             d��     �               void testSbox(void) {5��                        �                    5�_�   )   -           *           ����                                                                                                                                                                                                                                                                                                                                                             d��    �                 #ifndef TESTS_H   #define TESTS_H       #include "../inc/aes.h"   #include "../inc/sbox.h"   #include "../inc/shift-rows.h"   #include <assert.h>   #include <limits.h>   #include <stdint.h>       typedef struct {     const uint128_t XY[2];     const float RESULT;   } AvalancheTest;       &uint128_t uint128(uint64_t, uint64_t);   uint8_t popcount128(uint128_t);   void testAvalanche(void);   void testShiftRows(void);   void testSbox(void) ;   *void avalancheEffect(const AvalancheTest);       #endif�               5��                          �              �      �                                   �              5�_�   *   .   ,       -           ����                                                                                                                                                                                                                                                                                                                                                  v        d��    �   
            &uint128_t uint128(uint64_t, uint64_t);5��    
                      �       R               5�_�   -               .           ����                                                                                                                                                                                                                                                                                                                                                  v        d��    �   
           5��    
                      �       '               5�_�   *       +   -   ,           ����                                                                                                                                                                                                                                                                                                                                                             d��    �              5��                          q                      5�_�   *           ,   +           ����                                                                                                                                                                                                                                                                                                                                                             d��    �      	        5��                          �                      5��