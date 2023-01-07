/**
 * Program Name: cis25Fall2022MichaelFigueiredoFinalB.cpp
 * Discussion:   Application with Fraction
 * Written By:   Michael Figueiredo 
 * Date:         2022/12/15
 */

 // Header/Include Files
#include <iostream> 
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
#include "finalExamUtilityMichaelFigueiredo.h"

using namespace std;

// Application Driver
int main() {

    displayClassInfoMF();

    runMenuFinalExamMF();

    return 0;
}

/** PROGRAM_OUTPUT

 
CIS 25 - C++ Programming
Laney College
Michael Figueiredo

Final Exam Information - -
  Implemented by:           MichaelFigueiredo
  Submitted Date:           2022/12/15 by 10:00pm

We write code to manipulate data, which are
provided by the user,to produce the
required outcome in the most efficient way!

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuMF()!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

      While createFractionMF() is running!

      Enter an int for num: 11

      Enter a non-zero int for denom: 13511

  Calling FractionMichaelFigueiredo(int, int)!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  Calling printMF()!


  While ::printMF() is running!

    Address : 000001A512FD0B20
      num : 11
      denom : 13511

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuMF()!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 2

    To call updateFractionMF()!

      While createFractionMF() is running!

      The information of the current Fraction -

  While ::printMF() is running!

    Address : 000001A512FD0B20
      num : 11
      denom : 13511

      Enter an int for num: 3

      Enter a non-zero int for denom: 19091

  While ::updateMF() is running!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  Calling printMF()!


  While ::printMF() is running!

    Address : 000001A512FD0B20
      num : 3
      denom : 19091

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 2

  Calling isPalindromeMF()!

  The Fraction at00000035CD36F738 is a Palindrome!


****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 3

  Calling displayPalindromeInfoMF()!

  While ::getNumMF() is running!

  While ::getNumMF() is running!

  While ::getDenomMF() is running!

  While ::getDenomMF() is running!

  The Fraction at00000035CD36F328 is a Palindrome!

  Calling displayPalindromeInfoMF()!

  The Fraction at 00000035CD36F890is a Palindrome.

  There is/are 3 uncommon odd digit(s).
  3 is found 1 time(s) in the Numerator num
  1 is found 1 time(s) in the Denominator denom
  9 is found 1 time(s) in the Denominator denom

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuMF()!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 232

 Wrong Option!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 2

    To call updateFractionMF()!

      While createFractionMF() is running!

      The information of the current Fraction -

  While ::printMF() is running!

    Address : 000001A512FD0B20
      num : 3
      denom : 19091

      Enter an int for num: 235532

      Enter a non-zero int for denom: 19091

  While ::updateMF() is running!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  Calling printMF()!


  While ::printMF() is running!

    Address : 000001A512FD0B20
      num : 235532
      denom : 19091

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 2

  Calling isPalindromeMF()!

  The Fraction at00000035CD36F738 is a Palindrome!


****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 3

  Calling displayPalindromeInfoMF()!

  While ::getNumMF() is running!

  While ::getNumMF() is running!

  While ::getDenomMF() is running!

  While ::getDenomMF() is running!

  The Fraction at00000035CD36F328 is a Palindrome!

  Calling displayPalindromeInfoMF()!

  The Fraction at 00000035CD36F890is a Palindrome.

  There is/are 6 uncommon odd digit(s).
  3 is found 2 time(s) in the Numerator num
  5 is found 2 time(s) in the Numerator num
  1 is found 1 time(s) in the Denominator denom
  9 is found 1 time(s) in the Denominator denom

****************************************
*            MENU - Final Exam B       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeMF()   *
* 3. Calling displayPalindromeInfoMF() *
* 4. Caling member printMF()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 5

  Clean Up!

  Have a nice Holiday Season!
*/


/** Logic_Code_Output_Issues
No Comments!
*/
