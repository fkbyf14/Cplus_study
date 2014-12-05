#include <iostream>
using namespace std;
void count(char * str1, char * str2){
	int c = 0;
	int i = 0;
	bool isEnd = false;
	bool isEnd1 = false;
	while (!isEnd) {
		if(str1[c]=='\0'){
			isEnd==true;
		}		c++;
			}
	while (!isEnd1) {
		if(str2[i]=='\0'){
			isEnd1 == true;
		}
		str1[c+i] = str2[i++];	
}
}
int main(){	char in1[11] = "jhhjh";
	char in2[5] = "oioi";
	count(in1, in2);
	cout<<in1<<endl;
	return 0;}
----------------------------
void count(char * to, char * from){
	int c = 0;
	int i = 0;
	while (to[c]!='\0') {
		c++;
		}		
			
	while (from[i]!='\0') {
		
		to[c+i] = from[i++];	
}
to[c+i]='\0';
}