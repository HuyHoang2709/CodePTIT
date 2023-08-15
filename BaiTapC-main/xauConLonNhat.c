#include <stdio.h>
#include <string.h>

/*  
	Idea là duyệt từ cuối lên
	lấy chữ cái sau cùng làm mốc
	- nếu bằng thì thêm vào arr
	- nếu hơn thì thêm vào arr + update mốc
*/

int main(){
    char s[100001];
    gets(s);
    s[strlen(s)] = '\0';
    
    int mark = s[strlen(s)-1];
    int len = strlen(s);
    char str[100001];
    int index = 0;
    int check = 0;

    for(int i = len-1; i >= 0; i--) {
        if(s[i] == mark) {
        	str[index] = s[i];
        	index++;
		}
		else if(mark < s[i]) {
			mark = s[i];
			str[index] = s[i];
			index++;
		}
    }

    for(int i = index-1; i >= 0; i--) printf("%c", str[i]);
    return 0;
}