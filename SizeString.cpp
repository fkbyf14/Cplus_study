#include <iostream>
using namespace std;
int count(char * str){
	int c = 0;	
bool isEnd = false;
	while (!isEnd) {
		if(str[c]=='\0'){
			isEnd==true;
		}		c++;
	}	return c;
}
int main(){
	char *in = "jhhjhjhj";
	cout<<count(in);
	return 0;}

или
 unsigned strlen(const char *str) {

int c = 0; 
while (str[c]!='\0') {
c++;
}
return c;

}