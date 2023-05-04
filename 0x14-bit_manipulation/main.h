#ifndef MAIN_H
#define MAIN_H

/* putchar function */
int _putchar(char c);

/* Binary to unsigned int conversion */
unsigned int binary_to_uint(const char *b);

/* Print binary representation of a number */
void print_binary(unsigned long int n);

/* Get value of bit at given index */
int get_bit(unsigned long int n, unsigned int index);

/* Set value of bit at given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Set value of bit at given index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Number of bits required to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */

