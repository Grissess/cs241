/* 
 *  * CS:APP Data Lab 
 *   * 
 *    * <Please put your name and userid here>
 *     * 
 *      * bits.c - Source file with your solutions to the Lab.
 *       *          This is the file you will hand in to your instructor.
 *        *
 *         * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 *          * compiler. You can still use printf for debugging without including
 *           * <stdio.h>, although you might get a compiler warning. In general,
 *            * it's not good practice to ignore compiler warnings, but in this
 *             * case it's OK.  
 *              */

#if 0
/*
 *  * Instructions to Students:
 *   *
 *    * STEP 1: Read the following instructions carefully.
 *     */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
 *    * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
 *       */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
 *    * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
 *       */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 *  * STEP 2: Modify the following functions according the coding rules.
 *   * 
 *    *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *     *   1. Use the dlc compiler to check that your solutions conform
 *      *      to the coding rules.
 *       *   2. Use the BDD checker to formally verify that your solutions produce 
 *        *      the correct answers.
 *         */


#endif
/* 
 *  * bitNor - ~(x|y) using only ~ and & 
 *   *   Example: bitNor(0x6, 0x5) = 0xFFFFFFF8
 *    *   Legal ops: ~ &
 *     *   Max ops: 8
 *      *   Rating: 1
 *       */
int bitNor(int x, int y) {
  return (~x)&(~y);
}
/* 
 *  * isNonZero - Check whether x is nonzero using
 *   *              the legal operators except !
 *    *   Examples: isNonZero(3) = 1, isNonZero(0) = 0
 *     *   Legal ops: ~ & ^ | + << >>
 *      *   Max ops: 10
 *       *   Rating: 4 
 *        */
int isNonZero(int x) {




  return x;

}
/* 
 *  * copyLSB - set all bits of result to least significant bit of x
 *   *   Example: copyLSB(5) = 0xFFFFFFFF, copyLSB(6) = 0x00000000
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 5
 *      *   Rating: 2
 *       */
int copyLSB(int x) {
  return 2;
}
/* 
 *  * rotateRight - Rotate x to the right by n
 *   *   Can assume that 0 <= n <= 31
 *    *   Examples: rotateRight(0x87654321,4) = 0x76543218
 *     *   Legal ops: ~ & ^ | + << >>
 *      *   Max ops: 25
 *       *   Rating: 3 
 *        */
int rotateRight(int x, int n) {
  int temp = ((1 << n) - 1) & x;
  int mask = (1 << (31 - n)) - 1;
  x = (x >> n) & 
  return 2;
}
/* 
 *  * isNegative - return 1 if x < 0, return 0 otherwise 
 *   *   Example: isNegative(-1) = 1.
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 6
 *      *   Rating: 2
 *       */
int isNegative(int x) {
  return 2;
}
/* 
 *  * absVal - absolute value of x
 *   *   Example: absVal(-1) = 1.
 *    *   You may assume -TMax <= x <= TMax
 *     *   Legal ops: ! ~ & ^ | + << >>
 *      *   Max ops: 10
 *       *   Rating: 4
 *        */
int absVal(int x) {
  return 2;
}
/* 
 *  * negate - return -x 
 *   *   Example: negate(1) = -1.
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 5
 *      *   Rating: 2
 *       */
int negate(int x) {
  return 2;
}
/* 
 *  * float_abs - Return bit-level equivalent of absolute value of f for
 *   *   floating point argument f.
 *    *   Both the argument and result are passed as unsigned int's, but
 *     *   they are to be interpreted as the bit-level representations of
 *      *   single-precision floating point values.
 *       *   When argument is NaN, return argument..
 *        *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *         *   Max ops: 10
 *          *   Rating: 2
 *           */
unsigned float_abs(unsigned uf) {
  return 2;
}
/* 
 *  * float_twice - Return bit-level equivalent of expression 2*f for
 *   *   floating point argument f.
 *    *   Both the argument and result are passed as unsigned int's, but
 *     *   they are to be interpreted as the bit-level representation of
 *      *   single-precision floating point values.
 *       *   When argument is NaN, return argument
 *        *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *         *   Max ops: 30
 *          *   Rating: 4
 *           */
unsigned float_twice(unsigned uf) {
  return 2;
}
/*
 *  * isTmin - returns 1 if x is the minimum, two's complement number,
 *   *     and 0 otherwise 
 *    *   Legal ops: ! ~ & ^ | +
 *     *   Max ops: 10
 *      *   Rating: 1
 *       */
int isTmin(int x) {
  return 2;
}
/* 
 *  * leastBitPos - return a mask that marks the position of the
 *   *               least significant 1 bit. If x == 0, return 0
 *    *   Example: leastBitPos(96) = 0x20
 *     *   Legal ops: ! ~ & ^ | + << >>
 *      *   Max ops: 6
 *       *   Rating: 2 
 *        */
int leastBitPos(int x) {
  return 2;
}
/* 
 *  * reverseBytes - reverse the bytes of x
 *   *   Example: reverseBytes(0x01020304) = 0x04030201
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 25
 *      *   Rating: 3
 *       */
int reverseBytes(int x) {
  return 2;
}
/*
 *  * bitCount - returns count of number of 1's in word
 *   *   Examples: bitCount(5) = 2, bitCount(7) = 3
 *    *   Legal ops: ! ~ & ^ | + << >>
 *     *   Max ops: 40
 *      *   Rating: 4
 *       */
int bitCount(int x) {
  return 2;
}
/* 
 *  * sign - return 1 if positive, 0 if zero, and -1 if negative
 *   *  Examples: sign(130) = 1
 *    *            sign(-23) = -1
 *     *  Legal ops: ! ~ & ^ | + << >>
 *      *  Max ops: 10
 *       *  Rating: 2
 *        */
int sign(int x) {
    return 2;
}
/* 
 *  * bitMask - Generate a mask consisting of all 1's 
 *   *   lowbit and highbit
 *    *   Examples: bitMask(5,3) = 0x38
 *     *   Assume 0 <= lowbit <= 31, and 0 <= highbit <= 31
 *      *   If lowbit > highbit, then mask should be all 0's
 *       *   Legal ops: ! ~ & ^ | + << >>
 *        *   Max ops: 16
 *         *   Rating: 3
 *          */
int bitMask(int highbit, int lowbit) {
  return 2;
}
