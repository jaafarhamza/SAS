<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  //s1.myNum = 13;
  //s1.myLetter = 'B';

  // Print values
  printf("my Num :");
  scanf("%d",&s1.myNum);
  printf("My letter:");
  scanf("%s",&s1.myLetter);
  return 0;
}
=======
#include <stdio.h>
#include <stdlib.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  //s1.myNum = 13;
  //s1.myLetter = 'B';

  // Print values
  printf("my Num :");
  scanf("%d",&s1.myNum);
  printf("My letter:");
  scanf("%s",&s1.myLetter);
  return 0;
}
>>>>>>> b1c4f16f2b8f981043323d58a2823ca80f503d83
