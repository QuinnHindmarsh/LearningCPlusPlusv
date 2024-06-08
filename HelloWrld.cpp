// this code is not in CMakeLists so will not execute to let it execute put it in "add_executable" in that file

#include <iostream> // "header file library" lets us use input/output

using namespace std; //means we dont need to do std::cout


int main() { //function - automatically runs
   cout << "hello Wrld";// cout "see-out" "<<" is an inserion operator. every c++ statment ends with a ;
   cout << "turns out you need to use double qoutes";

   cout << "\nyou need to mainly make a new line";// \n is used to make a new line with output

   cout << "\n" << "you can do it like this aswell";

   cout << "\n" << "i can even split" << " one sentance across mutliple of these" << endl; //endl ends the line aswell

   cout << "endl even works to make a new line" << endl;

   /* - this is a multiline comment
    * \t - makes horizontal tab
    * \\ - lets you output a \
    * \" - lets you output a "
    */
   cout << "\t \\t creates a horizontal tab - \\\\ lets me put a backslash in - \\\" allows me to put a \" in";

   /*

    you dont actually need a * on each line - it was just automatically done :)
    its probably good practice but

     */

   return 0;//ends func
};



