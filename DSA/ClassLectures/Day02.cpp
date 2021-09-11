/* -- LECT:02 : Linear Search -- */

#include <iostream>

/* findme() function for search & return index */
int findme(int *p, int count, int value)
{
   for (int i = 0; i < count; i++)
   {
      if (*(p + i) == value)
      {
         return (i);
      }
   }

   return (0);
}

int main()
{
   int count;

   std::cout << "ENTER COUNT LIMIT:\n";
   std::cin >> count;

   int num[count];
   std::cout << "ENTER YOUR ELEMETS:\n";

   /* loading values in array */
   for (int i = 0; i < count; i++)
   {
      std::cin >> num[i];
   }

   std::cout << "You have Entered: ";
   for (int i = 0; i < count; i++)
   {
      std::cout << num[i] << " ";
   }

   std::cout << '\n';

   int find;
   std::cout << "ENTER THE VALUE YOU WANNA FIND:\n";
   std::cin >> find;

   /* calling function: findme() */
   int value = findme(num, count, find);

   if (value)
   {
      std::cout << find << " is found at index " << value << '\n';
   }
   else
      std::cout << find << " doesn't exist in this array.\n";

   return (0);
}
