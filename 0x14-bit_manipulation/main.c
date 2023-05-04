#include "main.h"
#include <stdio.h>
int main(void)
{
    unsigned int index;
    unsigned long int n, m;
    int ret;

    /* Test binary_to_uint */
    n = binary_to_uint("101");
    printf("%lu\n", n); /* Expected output: 5 */

    /* Test print_binary */
    printf("Binary representation of %lu: ", n);
    print_binary(n); /* Expected output: 101 */

    /* Test get_bit */
    index = 2;
    ret = get_bit(n, index);
    printf("The value of the bit at index %u is %d\n", index, ret); /* Expected output: The value of the bit at index 2 is 1 */

    /* Test set_bit */
    index = 1;
    ret = set_bit(&n, index);
    printf("After setting bit %u: %lu\n", index, n); /* Expected output: After setting bit 1: 7 */

    /* Test clear_bit */
    index = 0;
    ret = clear_bit(&n, index);
    printf("After clearing bit %u: %lu\n", index, n); /* Expected output: After clearing bit 0: 6 */

    /* Test flip_bits */
    m = 0;
    ret = flip_bits(n, m);
    printf("Number of bits to flip to get from %lu to %lu: %u\n", n, m, ret); /* Expected output: Number of bits to flip to get from 6 to 0: 3 */

    return (0);
}

