#include <algorithm>
#include <random>
#include <iostream>
#include <bits/stdc++.h>
#include "board.hpp"
#include "engine.hpp"
#include "butils.hpp"
using namespace std;

// Capital White

int mapping[7][7];
int mapping1[8][8];
void matrix(char s,int btype) {
    if(btype==1){
        if (s=='P') {
            int values[7][7]={      
                {10, 20, 20, 50, 0, 50, 5},
                {40, 40, 40,  50, 0, 30, 30},
                {10, 10, 20, 30, 20, 10, 10},
                {5, 5, 10, 25, 10, 5, 5},
                {5, 5, -10,  0, -10, -5, 5},
                {5, 5, 10,  -20, 20, 10, 5},
                {0, 0, 0,  0, 0, 20, 0},
            };
            
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }
        
        }
        if (s == 'p') {
            int values[7][7]={      
                {0, 20, 0,  0, 0, 0, 0},
                {5, 10, 20,  -20, 10, 5, 5},
                {5, -5, -10,  0, -10, -5, 5},
                {5, 5, 10, 25, 10, 5, 5},
                {10, 10, 20, 30, 20, 10, 10},
                
                {30, 30, 0,  50, 40, 40, 40},
                {5, 50, 0, 50, 20, 20, 10}  
            };

            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }
        
        }
        if (s=='B') {
            int values[7][7]={  
                {20, -10,  -10, -10, -10, -10, -20},
                {10, 0, 0,  0, 0, 0, -10},
                {10, 0, 5,10, 5, 0, -10},
                {-10, 5, 5,  10, 5, 5, -10},
                {-10, 10, 10, 10, 10, 10, -10},
                {-10, 5, 0, 0, 0, 5, -10},
                {-20, -10, -10,  -10, -10, -10, -20},
            };
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }
        
        }
        if (s == 'b') {
            int values[7][7]={  
                {-20, -10, -10,  -10, -10, -10, -20},
                {-10, 5, 0, 0, 0, 5, -10},
                {-10, 10, 10, 10, 10, 10, -10},
                {-10, 5, 5,  10, 5, 5, -10},
                {10, 0, 5,10, 5, 0, -10},
                {10, 0, 0,  0, 0, 0, -10},
                {20, -10,  -10, -10, -10, -10, -20},      
            };
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }
        
        }
        if (s=='K') {
            int values[7][7]={                    
                {-30, -40, -40, -50, -40, -40, -30},
                {-30, -40, -40, -50, -40, -40, -30},
                {-30, -40, -40,  -50, -40, -40, -30},
                {-20, -30, -30,  -40, -30, -30, -20},
                {-10, -20, -20,  -20, -20, -20, -10},
                {20, 20, 0, 0,  0, 20, 20},
                {20, 30, 10, 0, 10, 30, 20},
            };
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }
        }
        if (s == 'k') {
            int values[7][7]={                    
                {20, 30, 10, 0, 10, 30, 20},
                {20, 20, 0, 0,  0, 20, 20},
                {-10, -20, -20,  -20, -20, -20, -10},
                {-20, -30, -30,  -40, -30, -30, -20},
                {-30, -40, -40,  -50, -40, -40, -30},
                {-30, -40, -40, -50, -40, -40, -30},
                {-30, -40, -40, -50, -40, -40, -30} 
            };
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }
        }
        if ( s=='R') {
            int values[7][7]={
                    {50, 50, 40, 30, 20, 10, 10},
                    {50, 50, 40, 30, 20, 10, 10},
                    {20, 20,  0,  0,  0, -40, -40},
                    {30, 30,  0,  0,  0, -30, -30},
                    {40, 40,  0,  0,  0, -20, -20},
                    {50, 50, 40, 30, 20, 20, 20},
                    {60, 60, 50, 40, 30, 30, 30},
            };

            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }  
        }  
        if (s == 'r' ) {
            int values[7][7]={          
                    {30, 30, 30, 40, 50, 60, 60},
                    {20, 20, 20, 30, 40, 50, 50},
                    {-20, -20,  0,  0,  0, 20, 20},
                    {-30, -30,  0,  0,  0, 30, 30},
                    {-40, -40,  0,  0,  0, 20, 20},
                    {10, 10, 20, 30, 40, 50, 50},
                    {10, 10, 20, 30, 40, 50, 50},          
            };
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping[i][j] = values[i][j];
                }
            }  
        } 
    }
    else if(btype==2){
        if (s=='P') {
            int values[8][8]={      
                {10, 20, 20, 30, 50, 0, 50,5},
                {40, 40, 40,  40, 50,0, 30, 30},
                {10, 10, 20, 30, 20,15, 10, 10},
                {5, 5, 10, 25, 10,5, 5, 5},
                {5, 5, 10, 25, 10,5, 5, 5},
                {5, 5, -10,  0, -10,-5, -5, 5},
                {5, 5, 10,  10, 10,10, 10, 5},
                {0, 5, 5,  5, 5,5, 5, 0},
            };
            
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s == 'p') {
            int values[8][8]={      
                {0, 5,5, 5, 5, 5, 5, 0},
                {5, 10,10, 10,  10, 10, 5, 5},
                {5, -5,-5, -10,  0, -10, -5, 5},
                {5, 5,5, 10, 25, 10, 5, 5},
                {5, 5,5, 10, 25, 10, 5, 5},
                {10, 10,15, 20, 30, 20, 10, 10},
                
                {30, 30,0, 50,  40, 40, 40, 40},
                {5, 50,0, 50, 30, 20, 20, 10}  
            };

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s=='B') {
            int values[8][8]={  
                {20, -10,  -10, -10, -10,-10, -10, -20},
                {10, 0, 0,  0, 0,0, 0, -10},
                {10, 0, 5,10, 5,5, 0, -10},
                {10, 0, 5,10, 5,5, 0, -10},
                {-10, 5, 5,  10,5, 5, 5, -10},
                {-10, 10, 10, 10,10, 10, 10, -10},
                {-10, 5, 0, 0, 0,0, 5, -10},
                {-20, -10, -10,  -10, -10,-10, -10, -20},
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s == 'b') {
            int values[8][8]={  
                {-20, -10,-10, -10,  -10, -10, -10, -20},
                {-10, 5,0, 0, 0, 0, 5, -10},
                {-10, 10,10, 10, 10, 10, 10, -10},
                {-10, 5,5, 5,  10, 5, 5, -10},
                {-10,0,5,5,10,5,0,10},
                {-10, 0, 5,5,10, 5, 0, 10},
                {-10, 0, 0,  0, 0, 0,0, -10},
                {-20, -10,  -10, -10, -10, -10,-10, -20},      
            };
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s=='K') {
            int values[8][8]={                    
                {-30, -40, -40, -50, -40,-40, -40, -30},
                {-30, -40, -40, -50, -40,-40, -40, -30},
                {-30, -40, -40,  -50, -40,-40, -40, -30},
                {-20, -30, -30,  -40, -30,-30, -30, -20},
                {-15, -25, -25,  -25, -25,-25, -25, -15},
                {-10, -20, -20,  -20, -20,-20, -20, -10},
                {20, 20, 0, 0,  0, 20,20, 20},
                {20, 30, 10, 0, 10, 30,25, 20},
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        }
        if (s == 'k') {
            int values[8][8]={                    
                {20,25, 30, 10, 0, 10, 30, 20},
                {20,20, 20, 0, 0,  0, 20, 20},
                {-10,-20,-20, -20, -20,  -20, -20, -10},
                {-15,-25,-25,-25,-25,-25,-25,-15},
                {-20, -30, -30,-30,  -40, -30, -30, -20},
                {-30, -40, -40,-40,  -50, -40, -40, -30},
                {-30, -40, -40,-40, -50, -40, -40, -30},
                {-30, -40, -40,-40, -50, -40, -40, -30} 
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        }
        if ( s=='R') {
            int values[8][8]={
                    {50, 50, 40, 30, 20,15, 20, 20},
                    {50, 50, 40, 30, 20,15, 20, 20},
                    {20, 20,  0,  0,  0,-30, -40, -40},
                    {30, 30,  0,  0,  0,-20, -30, -30},
                    {30, 30,  0,  0,  0,-20, -30, -30},                    
                    {50, 50, 40, 30, 20,20, 20, 20},
                    {60, 60, 50, 40, 30,30, 30, 30},
            };

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }  
        }  
        if (s == 'r' ) {
            int values[8][8]={          
                    {30, 30,30, 30, 40, 50, 60, 60},
                    {20, 20,20, 20, 30, 40, 50, 50},
                    {-20, -20,-15,  0,  0,  0, 20, 20},
                    {-30, -30,-20,  0,  0,  0, 30, 30},
                    {-30, -30,-20,  0,  0,  0, 30, 30},
                    {-40, -40,-30,  0,  0,  0, 20, 20},
                    {20, 20,15, 20, 30, 40, 50, 50},
                    {20, 20,15, 20, 30, 40, 50, 50},          
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }  
        }
        // if ( s=='K') {
        //     int values[8][8]={
        //             {-50, -40, -30, -30, -30, -30, -40, -50},		// knight
        //             {-40, -20, 0, 0, 0, 0, -20, -40},
        //             {-30, 0, 10, 15, 15, 10, 0, -30},
        //             {-30, 5, 15, 20, 20, 15, 5, -30},
        //             {-30, 0, 15, 20, 20, 15, 0, -30},
        //             {-30, 5, 10, 15, 15, 10, 5, -30},
        //             {-40, -20, 0, 5, 5, 0, -20, -40},
        //             {-50, -40, -30, -30, -30, -30, -40, -50}
        //     };

        //     for (int i = 0; i < 8; i++) {
        //         for (int j = 0; j < 8; j++) {
        //             mapping1[i][j] = values[i][j];
        //         }
        //     }  
        // } 
        // if ( s=='k') {
        //     int values[8][8]={
        //             {50, 50, 40, 30, 20,15, 10, 10},
        //             {50, 50, 40, 30, 20,15, 10, 10},
        //             {20, 20,  0,  0,  0,-30, -40, -40},
        //             {30, 30,  0,  0,  0,-20, -30, -30},
        //             {30, 30,  0,  0,  0,-20, -30, -30},                    
        //             {50, 50, 40, 30, 20,20, 20, 20},
        //             {60, 60, 50, 40, 30,30, 30, 30},
        //     };

        //     for (int i = 0; i < 8; i++) {
        //         for (int j = 0; j < 8; j++) {
        //             mapping1[i][j] = values[i][j];
        //         }
        //     }  
        // } 
    }
    else if(btype==3){
        if (s=='P') {
            int values[8][8]={      
                {10, 20, 20, 50, 0, 5, 50,5},
                {40, 40, 40,  50, 0,5, 30, 30},
                {10, 10, 20, 30, 20,15, 10, 10},
                {5, 5, 10, 25, 10,5, 5, 5},
                {5, 5, 10, 25, 10,5, 5, 5},
                {5, 5, -10,  0, -10,-5, -5, 5},
                {5, 5, 10,  -20, 20,10, 10, 5},
                {0, 0, 0,  0, 0,10, 20, 0},
            };
            
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s == 'p') {
            int values[8][8]={      
                {0, 20,10, 0,  0, 0, 0, 0},
                {5, 10,10, 20,  -20, 10, 5, 5},
                {5, -5,-5, -10,  0, -10, -5, 5},
                {5, 5,5, 10, 25, 10, 5, 5},
                {5, 5,5, 10, 25, 10, 5, 5},
                {10, 10,15, 20, 30, 20, 10, 10},
                
                {30, 30,5, 0,  50, 40, 40, 40},
                {5, 50,5, 0, 50, 20, 20, 10}  
            };

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s=='B') {
            int values[8][8]={  
                {20, -10,  -10, -10, -10,-10, -10, -20},
                {10, 0, 0,  0, 0,0, 0, -10},
                {10, 0, 5,10, 5,5, 0, -10},
                {10, 0, 5,10, 5,5, 0, -10},
                {-10, 5, 5,  10,5, 5, 5, -10},
                {-10, 10, 10, 10,10, 10, 10, -10},
                {-10, 5, 0, 0, 0,0, 5, -10},
                {-20, -10, -10,  -10, -10,-10, -10, -20},
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s == 'b') {
            int values[8][8]={  
                {-20, -10,-10, -10,  -10, -10, -10, -20},
                {-10, 5,0, 0, 0, 0, 5, -10},
                {-10, 10,10, 10, 10, 10, 10, -10},
                {-10, 5,5, 5,  10, 5, 5, -10},
                {-10,0,5,5,10,5,0,10},
                {-10, 0, 5,5,10, 5, 0, 10},
                {-10, 0, 0,  0, 0, 0,0, -10},
                {-20, -10,  -10, -10, -10, -10,-10, -20},      
            };
            for (int i = 0; i <8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        
        }
        if (s=='K') {
            int values[8][8]={                    
                {-30, -40, -40, -50, -40,-40, -40, -30},
                {-30, -40, -40, -50, -40,-40, -40, -30},
                {-30, -40, -40,  -50, -40,-40, -40, -30},
                {-20, -30, -30,  -40, -30,-30, -30, -20},
                {-15, -25, -25,  -25, -25,-25, -25, -15},
                {-10, -20, -20,  -20, -20,-20, -20, -10},
                {20, 20, 0, 0,  0, 20,20, 20},
                {20, 30, 10, 0, 10, 30,25, 20},
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        }
        if (s == 'k') {
            int values[8][8]={                    
                {20,25, 30, 10, 0, 10, 30, 20},
                {20,20, 20, 0, 0,  0, 20, 20},
                {-10,-20,-20, -20, -20,  -20, -20, -10},
                {-15,-25,-25,-25,-25,-25,-25,-15},
                {-20, -30, -30,-30,  -40, -30, -30, -20},
                {-30, -40, -40,-40,  -50, -40, -40, -30},
                {-30, -40, -40,-40, -50, -40, -40, -30},
                {-30, -40, -40,-40, -50, -40, -40, -30} 
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }
        }
        if ( s=='R') {
            int values[8][8]={
                    {50, 50, 40, 30, 20,15, 10, 10},
                    {50, 50, 40, 30, 20,15, 10, 10},
                    {20, 20,  0,  0,  0,-30, -40, -40},
                    {30, 30,  0,  0,  0,-20, -30, -30},
                    {30, 30,  0,  0,  0,-20, -30, -30},                    
                    {50, 50, 40, 30, 20,20, 20, 20},
                    {60, 60, 50, 40, 30,30, 30, 30},
            };

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }  
        }  
        if (s == 'r' ) {
            int values[8][8]={          
                    {30, 30,30, 30, 40, 50, 60, 60},
                    {20, 20,20, 20, 30, 40, 50, 50},
                    {-20, -20,-15,  0,  0,  0, 20, 20},
                    {-30, -30,-20,  0,  0,  0, 30, 30},
                    {-30, -30,-20,  0,  0,  0, 30, 30},
                    {-40, -40,-30,  0,  0,  0, 20, 20},
                    {10, 10,15, 20, 30, 40, 50, 50},
                    {10, 10,15, 20, 30, 40, 50, 50},          
            };
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }  
        }
        if ( s=='N') {
            int values[8][8]={
                    {-50, -40, -30, -30, -30, -30, -40, -50},		// knight
                    {-40, -20, 0, 0, 0, 0, -20, -40},
                    {-30, 0, 10, 15, 15, 10, 0, -30},
                    {-30, 5, 15, 20, 20, 15, 5, -30},
                    {-30, 0, 15, 20, 20, 15, 0, -30},
                    {-30, 5, 10, 15, 15, 10, 5, -30},
                    {-40, -20, 0, 5, 5, 0, -20, -40},
                    {-50, -40, -30, -30, -30, -30, -40, -50}
            };

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }  
        } 
        if ( s== 'n') {
            int values[8][8]={
                    {50, 50, 40, 30, 20,15, 10, 10},
                    {50, 50, 40, 30, 20,15, 10, 10},
                    {20, 20,  0,  0,  0,-30, -40, -40},
                    {30, 30,  0,  0,  0,-20, -30, -30},
                    {30, 30,  0,  0,  0,-20, -30, -30},                    
                    {50, 50, 40, 30, 20,20, 20, 20},
                    {60, 60, 50, 40, 30,30, 30, 30},
            };

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    mapping1[i][j] = values[i][j];
                }
            }  
        }
    }
    
}
    
long unsigned int row(string l) 
{
    for (long unsigned int i = 0; i<l.size();i++){
        if (l[i]=='\n'){
            return i;
        }
    }
    return 1;
}

int eval_function(string &board_str,char player,int btype) {
    int value=0;
    int l=board_str.length();
    int num_rows=row(board_str);
    for(int i=0;i<l;i++){
        int row=i/num_rows;
        int col=i%num_rows;
        if(board_str[i]==' ' || board_str[i]=='\n' || board_str[i]=='.'){
            continue;
        }else{
            char current=board_str[i];
            matrix(board_str[i],btype);
            if(btype==1){
                if(current=='r'){
                    value-=350;
                    value-=mapping[row][col];
                }else if(current=='R'){
                    value+=350;
                    value+=mapping[row][col];
                }else if(current=='p'){
                    value-=100;
                    value-=mapping[row][col];
                }else if(current=='P'){
                    value+=100;
                    value+=mapping[row][col];
                }else if(current=='b'){
                    value-=300;
                    value-=mapping[row][col];
                }else if(current=='B'){
                    value+=300;
                    value+=mapping[row][col];
                }else if(current=='k'){
                    value-=6000;
                    value-=mapping[row][col];
                }else if(current=='K'){
                    value+=6000;
                    value+=mapping[row][col];
                    }
                }
                else if(btype==2 || btype==3){
                    if(current=='r'){
                        value-=350;
                        value-=mapping1[row][col];
                    }else if(current=='R'){
                        value+=350;
                        value+=mapping1[row][col];
                    }else if(current=='p'){
                        value-=100;
                        value-=mapping1[row][col];
                    }else if(current=='P'){
                        value+=100;
                        value+=mapping1[row][col];
                    }else if(current=='b'){
                        value-=300;
                        value-=mapping1[row][col];
                    }else if(current=='B'){
                        value+=300;
                        value+=mapping1[row][col];
                    }else if(current=='k'){
                        value-=6000;
                        value-=mapping1[row][col];
                    }else if(current=='K'){
                        value+=6000;
                        value+=mapping1[row][col];
                    }else if(current=='n'){
                        value-=300;
                        value-=mapping1[row][col];
                    }else if(current=='N'){
                        value+=300;
                        value+=mapping1[row][col];
                    }
                }

        }
    }
    if(player=='w'){
        return value;
    }else{
        return -value;
    }
}

int minimax_tree(Board& b,int depth, int alpha, int beta, bool maximising_player, char player,int btype){
    auto moveset = b.get_legal_moves();
    int eve = 0;
    if (depth==0 ){
        // string temp_str=board_to_str(b.data.board_0);
        const BoardData* pData = &(b.data);
        string temp_str = board_to_str(pData);
        int ans=eval_function(temp_str,player,btype);
        if(b.in_check()){
            if(moveset.size()==0){
                ans-=100000;
            }else{
                ans-=10000;
            }           
        }
        return ans;
    }
    
    
    if (maximising_player){
        bool is_in_danger=b.in_check() ;
        if(b.in_check() && moveset.size()==0 ){
            // string temp_str=board_to_str(b.data.board_0);
            const BoardData* p1Data = &(b.data);
            string temp_str = board_to_str(p1Data);
            int ans=eval_function(temp_str,player,btype);
            if( moveset.size()==0 && depth%2==0){
                ans-=100000;
            }
            return ans;
        }
        int maxeval = INT_MIN;
        for(auto m : moveset){
            // Board* copyBoard(const Board& original)
            // Board s = *copyBoard(b);
            const Board& originalBoard = b;  // Assuming b is the original board you want to copy
            // Use the copy constructor to create a copy of the original board
            Board s(originalBoard);
            // Board s = *b.copy();
            s.do_move_(m);
            if(is_in_danger){
                eve-=10000;
            }
            eve = minimax_tree(s,depth-1,alpha,beta,false,player,btype);
            
            maxeval = std::max(maxeval,eve);
            alpha  = std::max(alpha,eve);
            if (alpha>= beta){
                break;
            }

        }
    }

    else if (!maximising_player){
        bool is_in_danger=b.in_check();
        if(b.in_check()){
            const BoardData* p1Data = &(b.data);
            string temp_str = board_to_str(p1Data);
            // string temp_str=board_to_str(b.data.board_0);
            int ans=eval_function(temp_str,player,btype);
            if( moveset.size()==0 && depth%2!=0){
                ans+=100000;
            }
            return ans;
        }
        
        int minval = INT_MAX;
        for (auto m : moveset){
            // Board s = *copyBoard(b);
            const Board& originalBoard = b;  // Assuming b is the original board you want to copy
            // Use the copy constructor to create a copy of the original board
            Board s(originalBoard);
            // Board s = *b.copy();
            s.do_move_(m);
            if(is_in_danger){
                eve+=10000;
            }
            eve = minimax_tree(s,depth-1,alpha,beta,true,player,btype);
            
            minval = std::min(minval,eve);
            beta = std::min(beta,eve);
            if (alpha>= beta){
                break;

            }
        }
    }
    return eve;
}

unordered_map <string, int> visited_board;

// Board* copyBoard(const Board& original) {
//     Board* b = new Board();
//     memcpy(&(b->data), &(original.getData()), sizeof(BoardData));
//     return b;
// }

void Engine::find_best_move(const Board& b) {
    cout<<"BOARD TYPE "<<b.data.board_type<<endl;
    int btype=b.data.board_type;
    if(btype==1){
        cout<<"YES"<<endl;
    }
    auto ply=b.data.player_to_play ;
    char player;
    if(ply==64){
        player='w';
    }else{
        player='b';
    }
    // if(ply==64){
    string best_str_board; 
    // U16 bestMove;
    string bestMove_str;


    // if(search){
    auto start_time = std::chrono::high_resolution_clock::now();

    while (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() < 500) {
        // Your code here
        auto moveset = b.get_legal_moves();
        // string best_str_board; 
        // U16 bestMove;
        // string bestMove_str;
        // this->best_move = bestMove;
        if (moveset.size() == 0) {
            visited_board[move_to_str(0)]++;
            this->best_move = 0;      
        }
        else {
            // auto bestMove=*moveset.begin();
            // auto bestMove_str=move_to_str(bestMove);
            int bestValue = INT_MIN; 
            std::vector<U16> moves;      
            for (auto m : moveset) {
                Board temp_board = b; 
                temp_board.do_move_(m);
                int eval;
                if(ply==64){
                    eval = minimax_tree(temp_board, 3, INT_MIN, INT_MAX, false,player,btype);
                }else{
                    eval = minimax_tree(temp_board, 3, INT_MIN, INT_MAX, true,player,btype);
                }
                const BoardData* p1Data = &(temp_board.data);
                string current_board_str = board_to_str(p1Data);
                // string current_board_str=board_to_str(temp_board.data.board_0);
                if(visited_board[current_board_str]==1){
                    eval-=2000;
                }
                if(visited_board[current_board_str]==2){
                    eval-=10000;
                }
                if (eval > bestValue) {
                    
                    bestValue = eval;
                    // bestMove = m;
                    best_str_board=current_board_str;
                    this->best_move = m;
                }
            }
            visited_board[best_str_board]++;
            // this->best_move = bestMove;
            
        }

    }
            // }
}
   
