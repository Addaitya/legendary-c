#include <stdio.h>
#include <stdlib.h>

//1. returns lenght of str
int strLen(char str[]){
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
}

//2. to upper case
void strUpr(char str[]){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
    }
}

//3. to lower case
void strLwr(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
    }
}

//4. returns substring first occrence index O(n)
int strStr(char subStr[], char str[]){
    
    for(int i = 0; str[i] != '\0'; i++){
        int res = i;
        int j = 0;
        while(subStr[j] != '\0' && str[i] != '\0') {
            if(subStr[j] != str[i]) {
                 break;
            }
            j++;
            i++;
        }
        
        if(subStr[j] == '\0')
            return res;
    }
    return -1;
}

//5. returns reversed string
char* strRev(char str[]) {
    int size;
    for(size = 0; str[size] != '\0'; size++);
    
    char* rev = (char*)malloc(size * sizeof(char));
    
    for(int i = 0; str[i] != '\0'; i++)
        rev[size-i-1] = str[i];
    
    return rev;
}

//6. return concat of two str
char* strCat(char left[], char right[]) {
    int lsize, rsize, size;
    for(lsize = 0; left[lsize] != '\0'; lsize++);
    for(rsize = 0; right[rsize] != '\0'; rsize++);
    size = lsize + rsize;
    
    char* str = (char*)malloc(size * sizeof(char));
    
    for(int i = 0; left[i] != '\0'; i++)
        str[i] = left[i];
        
    for(int i = 0; right[i] != '\0'; i++)
        str[i + lsize] = right[i];
        
    return str;
}

//7. return copy of string
char* strCpy(char str[]) {
    int size;
    for(size = 0; str[size] != '\0'; size++);
    
    char* copy = (char*)malloc(size * sizeof(char));
    
    for(int i = 0; str[i] != '\0'; i++)
        copy[i] = str[i];
        
    return copy;
}

//8. return first occrence index of a char in string
int strChr(char str[], int chr) {
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == chr)
            return i;
    }
    
    return -1;
}

//9. compares two string, returns difference of ascii of diff char
int strCmp(char left[], char right[]) {
    for(int i=0; left[i] != '\0' && right[i] != '\0'; i++) {
        int diff = left[i] - right[i];
        if(diff)
            return diff;
    }
}

int main() {
    return 0;
}
