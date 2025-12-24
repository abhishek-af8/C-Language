int lengthOfLastWord(char* s) {
    char*start = s;
    char*end = s;
    char*tempstart = s; 
    char*tempend = s;

    while(*end != '\0'){
        end = start;
        if(*start==' '){
            while(*start==' '){
                start++;
            }
        }
        if(*start == '\0'){
            start = tempstart;
            end = tempend;
            return end - start;
        }
        end = start;

        while(*end != '\0' && *end != ' '){
            end++;
        }
        
        tempstart = start;
        tempend = end;
        if(*end == '\0'){
            return end-start;
        }
        start = end+1;
    }
    return end - start;
}
