#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main ()
{
  // inventory dataset. stored in a 2d array. r,c. [i] will be item, [j] will be code
  // dummy dataset.
  string a[5][2] = { {"dinner rolls ", "0"},
                 {"hamburger ", "2"},
                 {"dragon puffs ","4"},
                 {"nuggets ","6"},
                 {"chicken burger ","8"} };

  // main loop
    // user input - search the dataset item keywords. convert to lowercase. 0exit
    while(true)
    {
      string keyword = "";
      cout << "Search inventory item: ";
      cin >> keyword;

      // whole string version
      //getline (cin, keyword);

      // iterate through array[i]. if the keyword was found, print array[i][j]
      for(int i = 0; i < 5; i++)
      {
        size_t found = a[i][0].find(keyword);
        if (found!=string::npos)
        {
          for(int j = 0; j < 2; j++)
          {
            cout << a[i][j] << " ";
          }
          cout << "\n";
        }

      }

      // if no match found, print no match
    }

  // debug

  return 0;
}
