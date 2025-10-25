#include<stdio.h>

int ternary1(int i){
    (++i)?printf("i got updated and i is = %d\n", i):printf("i didn't get updated and i is = %d\n", i);
}
int ternary2(int i){
    (i++)?printf("i got updated and i is = %d\n", i):printf("i didn't get updated and i is = %d\n", i);
}

int main(){
    ternary1(-1);
    ternary2(-1);
return 0;
}

//We can see above that in ternary1() the i value is first incremented and then checked in the if block (typical pre-increment thing), so after increment i becomes 0 and hence the if block, i.e., the segment after "?" is not executed, instead the segment after ":", i.e., the else block gets executed. Because if condition is false on an entry of 0

//now coming to the ternary2() function, we have a postfix increment for i, so here i is incremented after a sequence point which in this case is the "?", i.e., after the if statement argument. So, for checking the if block condition we have an i=-1 entry only due to which the if block gets executed as the condition is not false. i.e., not equal to 0. After the "?", which happense to be a sequence point in C-programming the value of i gets incremented and when the final output comes the incremented value, i.e. 0 gets printed by the prinf() in the if block.