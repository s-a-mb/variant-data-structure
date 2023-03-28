#include <iostream>
#include <string>

class variant {
 public:
   void operator=(int value) {
      ptr = &value;
      type = 1;
   }
   void operator=(char value) {
      ptr = &value;
      type = 2;
   }
   void operator=(std::string value) {
      ptr = &value;
      type = 3;
   }
   void operator=(float value) {
      ptr = &value;
      type = 4;
   }
   void print() {
      switch(type) {
         case 1: {
            int* ptrInt = (int *)ptr;
            std::cout << *ptrInt << std::endl;
         }
            break;
         case 2: {
            char* ptrChar = (char *)ptr;
            std::cout << *ptrChar << std::endl;
         }
            break;
         case 3: {
            std::string* ptrStr = (std::string *)ptr;
            std::cout << *ptrStr << std::endl;
         }
            break;
         case 4: {
            float* ptrFlt = (float *)ptr;
            std::cout << *ptrFlt << std::endl;
         }
            break;
      }
   }
 private:
   void *ptr;
   int type;
};

int main() {
   variant x;

   x = 1;

   x.print();

   x = 'c';

   x.print();

   x = "Hello!";

   x.print();

   float needsVar = 3.1415;
   x = needsVar;

   x.print();

   return 0;
}
