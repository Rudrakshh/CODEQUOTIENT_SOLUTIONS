/*
 * Complete the function 'gcd'
 * @params
 *   i -> first integer
 *   j -> second integer
 *
 *  @returns
 *  an integer, denoting the gcd of i and j
 */
int gcd(int i, int j){
    if (i == 0)
       return j;
    if (j == 0)
       return i;
  
    // base case
    if (i == j)
        return i;
  
    // a is greater
    if (i > j)
        return gcd(i-j, j);
    return gcd(i, j-i);
}
