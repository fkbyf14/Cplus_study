#include <iostream>

using namespace std;

char *getline() {
   
    char c = '\0';
    int n = 10000;
    int j = 0;
    char *m = new char[n];
    while(cin.get(c)){
        if(c!='\n'){
           m[j++] = c;
                       
            }
         if(c!='\n'&&j==n){
         n = 2*n;
             char *mt = new char[n];
            for(int i = 0;i < n/2;i++){
                mt[i] = m[i];
            }
            
            m = mt;
              delete[] m;
        }
        if(c=='\n'){
            break;
            }
        
        
        }
    m[j] = '\0';
return m;
}