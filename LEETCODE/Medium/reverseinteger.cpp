/*
If we do from the normal method then we will stuck in this because the problem has given the range of the number
as -2^31 to 2^31-1 if the number is out of range then your code will not run.
As you can see when we multiply the rev = rev*10 it can give it to a very high number which can be out of range
so the simple idea is to check if rev is greater or less than of INT_MAX and INT_MIN if it satisfy the condition then
it goes out of range return 0, if not then continue or break that loop.


Details:-

some_int_expression > INT_MAX and some_int_expression < INT_MIN are never useful because those are always false. No int value can be larger than INT_MAX and no int value can be less than INT_MIN.
When res  > INT_MAX/10 is true, doing res * 10 will cause the operation to overflow the representable range of int, and as a consequence, the behaviour of the program will be undefined.
*/







//FIRST METHOD
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int rem;
        while (x != 0) {
            if ((rev > (INT_MAX / 10)) || (rev < (INT_MIN / 10))) {
                return 0;
            }
            rem = x % 10;
            rev = (rev * 10) + rem;
            x /= 10;
        }
        return rev;
    }
};


//SECOND METHOD
class Solution {
public:
    int reverse(int x) {
        int rem;
        int rev = 0;
        while (x != 0) {
            rem = x % 10;
            rev = (rev * 10) + rem;
            x /= 10;
            if (rev > INT_MAX || rev < INT_MIN) return 0;
        }
        return rev;
    }
}