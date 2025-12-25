//  SOURCE: GEEK
#include <stdio.h>
#include <stdint.h>
/**1.
* bit_odd_even: check if rightmost bit is 1.
*/
void bit_odd_even(int8_t a){
    (a & 1) ? printf("odd\n"): printf("even\n");
}
/**2,3.
* bit_shift[left|right]_[multiply by 2|divide by 2]
* note: never use negative number for shift it will be unpredictable
*/
void bit_shift_left_multiply2(int8_t a, int pos){
    printf("%d lft %d = %d\n", a, a<<pos);
}
void bit_shift_right_divide2(int8_t a, int pos){
    printf("%d right %d = %d\n", a, a>>pos);
}
/**4.
* bit_odd_number_out: pick the non repeating number from array
* AKA
* bit_non_repeating_number
*/
void bit_odd_number_out(int8_t a[]){   
    int n = sizeof(a)/sizeof(a[0]);
    int res=0;
    for(int i=0; i<n; i++){
        res = res ^ a[i];
    }
    printf("Odd number out from array = %d\n", res);
}
/**5. difficult
* bit_swap_bytes/bit_nibble_swap/bit_swap_adjacent_bytes 
* also known as nibble swap
* NOTE:  search for more generic code
* example: 0x12345678 -> 0x34127856
*/
uint32_t bit_swap_bytes(uint32_t x) {
    return ((x & 0xFF000000) >> 8) |  // byte1 -> byte2
           ((x & 0x00FF0000) << 8) |  // byte2 -> byte1
           ((x & 0x0000FF00) >> 8) |  // byte3 -> byte4
           ((x & 0x000000FF) << 8);   // byte4 -> byte3
}
/**6.
 * @brief bit_check_power_2: check if check if a number is a power of two
 * Logic: if 'n' is power of 2, then 'n-1' and 'n' will not have bits in common (don't share same power of 2).
 * E.g. 4 = 100, 3 = 011 -> 100 & 011 = 000 TRUE
 * E.g. 5 = 101, 4 = 100 -> 101 & 100 = 100 FALSE
 */
void bit_check_power_2(int8_t n){
    if(n && !(n & (n - 1))){
        printf("%d is power of 2\n", n);
    } else {
        printf("%d is not power of 2\n", n);
    }
}
void main(){
    int8_t a=1,b=0;
    printf("%d and %d = %d\n", a, b, a&b);
    printf("%d  or %d = %d\n", a, b, a|b);
    printf("%d xor %d = %d\n", a, b, a^b);
    printf("%d not %d = %d\n", a, b, ~a);
    printf("%d lft %d = %d\n", a, b, a<<2);
    printf("%d rgt %d = %d\n", a, b, a>>2);

    bit_odd_even(a);
    bit_odd_even(b);
    bit_shift_left_multiply2(4,1);
    bit_shift_right_divide2(4,1);

    int16_t c = 1234;
    int pos = 1;
    printf("c=%d shift pos %d = %d\n", c, pos, c << pos);

    int8_t arr[] = {2,3,4,5,3,2,4};
    bit_odd_number_out(arr);

    //swap bytes input
    uint32_t x = 0x12345678;
    uint32_t y = swap_bytes(x);
    printf("0x%X → 0x%X\n", x, y);

    bit_check_power_2(4);
    bit_check_power_2(5);
}
 
