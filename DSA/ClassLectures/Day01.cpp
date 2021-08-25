/* Insert, Delete, Find an element in an array */

#include <iostream>

void show(int *p, int count)
{
   for (int i = 0; i < count; i++)
   {
      std::cout << *(p + i) << " "
   }
}

int find(int *p, int key, int count)
{
   for (int i = 0; i < count; i++)
   {
      if (*(p + i) == key)
      {
         return (i);
      }
   }

   return (0);
}

void insert(int num[], int key, int index, int count)
{
   for (int i = count - 2; i >= index; i--)
   {
      num[i + 1] = num[i];
   }

   num[index] = key;
}

void remove(int num[], int key, int count)
{
   for (int i = 0; i < count; i++)
   {
      if (key == num[i])
      {
         while (i < count)
         {
            num[i] = num[i + 1];
            i++;
         }
         count--;
         return;
      }
   }
}

int main()
{
   int count, size;
   std::cout << "ENTER THE SIZE OF ARRAY:\n";
   std::cin >> size;

   std::cout << "ENTER THE COUNT LIMIT:\n";
   std::cin >> count;

   int num[size];
   std::cout << "ENTER YOUR ARRAY ELEMTS:\n";
   for (int i = 0; i < count; i++)
   {
      std::cin >> num[i];
   }

   std::cout << "INITIALLAY UR ARRAY IS: ";
   show(num, count);
   std::cout << "\n\n";

   int find_me, delete_me, insert_me, index;
   std::cout << "ENTER THE ELEMTS YOU WANNA FIND:\n";
   std::cin >> find_me;
   std::cout << "You Entered --> " << find_me << "\n\n";

   int val = find(num, find_me, count);
   std::cout << find_me << " found at index: " << val << "\n\n";

   std::cout << "ENTER THE ELEMENTS U WANNA INSERT AND ITS INDEX:\n";
   std::cin >> insert_me >> index;
   std::cout << "You Entered --> " << insert_me << " " << index << "\n\n";

   count++;

   insert(num, insert_me, index, count);
   show(num, count);

   std::cout << "ENTER THE ELEMTS U WANNA DELETE:\n";
   std::cin >> delete_me;
   std::cout << "You Entered --> " << delete_me << '\n';

   remove(num, delete_me, count);
   count--;
   show(num, count);

   return (0);
}
