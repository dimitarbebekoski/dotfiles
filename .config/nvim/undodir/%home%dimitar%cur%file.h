Vim�UnDo� `	$������g���K�3�o"`��q ґ�OK                                          d`   	 _�                             ����                                                                                                                                                                                                                                                                                                                                                             dW�     �                   �               5��                                          �      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             dW�     �                &void readFile(const char *FILE_NAME) {5��                                                  �                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             dW�     �                 5��                                                  �                                                �                       	                  	       �                                             �                                             �                                               �                                               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             dW�    �                 }5��                         �                     �                                                �                                               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 v        dW�     �               *  const long BUF_SIZE = 0.5 * 1024 * 1024;   -  FILE *const P_file = fopen(FILE_NAME, "r");         if (P_file == NULL)       return;         fseek(P_file, 0L, SEEK_END);   "  const long SIZE = ftell(P_file);     fseek(P_file, 0, SEEK_SET);     char buf[BUF_SIZE];     memset(buf, 0, SIZE);   5  const long READ_SIZE = fread(buf, 1, SIZE, P_file);         fclose(P_file);       0  assert(SIZE == READ_SIZE && SIZE == BUF_SIZE);     assert(READ_SIZE == SIZE);     printf("%s", buf);   }5��                        H       �              5�_�                       &    ����                                                                                                                                                                                                                                                                                                                                                v        dW�     �               &void readFile(const char *FILE_NAME) {5��       $                 C                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v        dW�     �               %void readFile(const char *FILE_NAME);5��              	           9       	               5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                v        dW�    �                 #ifndef FILE_H   #define FILE_H       void readFile(const char *);            #endif�               5��                          G               D       �                                   G               5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                                v        dX+     �                5��                                                5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                v        dX+     �                5��                                                5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                v        dX,     �                �             5��                                        :       5�_�                            ����                                                                                                                                                                                                                                                                                                                            	          	          v        dX-    �              
   #ifndef FILE_H   #define FILE_H       #include <assert.h>   #include <stdio.h>   #include <string.h>       void readFile(const char *);       #endif�   
            5��    
               
       �               �       �            
                       �               5�_�                           ����                                                                                                                                                                                                                                                                                                                            	          	          v        dXi     �          
      #ifndef FILE_H5��                                                5�_�                           ����                                                                                                                                                                                                                                                                                                                            	          	          v        dXi    �         
      #define FILE_H5��                                               5�_�                           ����                                                                                                                                                                                                                                                                                                                            	          	          v        dXm     �          
      #ifndef FILES_H5��                                                5�_�                          ����                                                                                                                                                                                                                                                                                                                            	          	          v        dXq    �         
      #define FILES_H5��                                               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          dY)     �         
      #define FILE_H�          
      #ifndef FILE_H5��                                                  �                                                5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                          dY+    �   	              #endif5��    	                      }                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d^�    �      	   
      void readFile(const char *);5��                         _                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                          d`     �         
    �         
    5��                          ^                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �                 //#ifndef FILE_H   //#define FILE_H       #include <assert.h>   #include <stdio.h>   #include <string.h>   #include <stdlib.h>       char* readFile(const char *);       //#endif�               5��                          �               �       �                                   �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �                // #ifndef FILE_H5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �                / #ifndef FILE_H5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �                 #ifndef FILE_H5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �               // #define FILE_H5��                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �               / #define FILE_H5��                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �                #define FILE_H5��                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �   
              	// #endif5��    
                      �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                          d`     �   
              / #endif5��    
                      �                      5�_�                             ����                                                                                                                                                                                                                                                                                                                                                          d`     �   
               #endif5��    
                      �                      5�_�                              ����                                                                                                                                                                                                                                                                                                                                                          d`   	 �                 #ifndef FILE_H   #define FILE_H       #include <assert.h>   #include <stdio.h>   #include <stdlib.h>   #include <string.h>       char *readFile(const char *);       #endif�               5��                          �               �       �                                   �               5�_�                           ����                                                                                                                                                                                                                                                                                                                            	          	          v        dXm     �          
      #ifndef FILEH5��                                                5��