# 剑指offer Study Timeline and Note 

| Time | 剑指offer |
| ---- | --------- |
| 7.19 | 1 - 6     |


1. **Debug**
   I found [they](https://github.com/gatieme/CodingInterviews) using Macro for Debugging very interesting, they actually using something like:
   ```c++
   #ifdef ... //Debug Mode
   #define debug cout
   #else
   #define debug 0 && cout
   #endif
   int main(){
       // Stuff
       debug <<"Stuff..." <<endl;
   ```
   Meaning that if Debug Mode is on, then somethings would be output, but if Debug Mode is off, then debug will be replaced by 0 && cout, when 0 && would end any expression, which meaning nothing would be output, and that's actually Debug Mode off.
