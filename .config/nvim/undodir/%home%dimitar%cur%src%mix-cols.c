Vim�UnDo� &(GD||��'�[��H�V]��^IK��\�E�      #include "../inc/mix-cols.h"      
                       d05�   	 _�                            ����                                                                                                                                                                                                                                                                                                                                                             d/)k     �                  #include "../inc/mix-cols.h"5��                                                �                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d/)k     �                  �               5��                                        �      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             d/)n    �               5unsigned char mul(unsigned char a, unsigned char b) {5��                                                5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d/)�    �               J  for (; a != 0 && b != 0; a = (a << 1) ^ (a & 0x80 ? 0x11b : 0), b >>= 1)5��                        �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d/)�    �               J  for (; a != 1 && b != 0; a = (a << 1) ^ (a & 0x80 ? 0x11b : 0), b >>= 1)5��                        �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d/)�    �               (  for (unsigned char i = 0; i < 16; ++i)5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             d/)�    �               (  for (unsigned char i = 1; i < 16; ++i)5��                        �                    5�_�      	                 #    ����                                                                                                                                                                                                                                                                                                                                                             d0'     �               7    const unsigned char *P_S_ROW = &state[i - (i & 3)];5��       #                                       5�_�      
           	      )    ����                                                                                                                                                                                                                                                                                                                                                             d0'     �               6    const unsigned char *P_S_ROW = state[i - (i & 3)];5��       (                                     5�_�   	              
      7    ����                                                                                                                                                                                                                                                                                                                                                             d0'
    �               8    const unsigned char *P_S_ROW = state + i - (i & 3)];5��       6                                       5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             d0'    �                 #include "../inc/mix-cols.h"       <static unsigned char mul(unsigned char a, unsigned char b) {     unsigned char p = 0;       J  for (; a != 0 && b != 0; a = (a << 1) ^ (a & 0x80 ? 0x11b : 0), b >>= 1)       if (b & 1)         p ^= a;         return p;   }       Fvoid MixColumns(const unsigned char INV, unsigned char *const state) {     unsigned char tmp[16] = {0};     const unsigned char *MUL =   M      INV ? (unsigned char[]){14, 11, 13, 9} : (unsigned char[]){2, 3, 1, 1};       *  for (unsigned char i = 0; i < 16; ++i) {   7    const unsigned char *P_S_ROW = state + i - (i & 3);       )    for (unsigned char j = 0; j < 4; ++j)   2      tmp[i] ^= mul(MUL[j], P_S_ROW[(i + j) & 3]);     }       (  for (unsigned char i = 0; i < 16; ++i)       state[i] = tmp[i];   }�               5��                          �              �      �                                   �              5�_�                       
    ����                                                                                                                                                                                                                                                                                                                               
                 v       d03T    �                #include "../inc/mix-cols.h"5��        
                  
                      5�_�                        
    ����                                                                                                                                                                                                                                                                                                                               
                 v       d05�   	 �                #include "mix-cols.h"5��        
                  
                      5��