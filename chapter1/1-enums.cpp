#include <iostream>

//comparing old and new enum styles

//wrong! don't use plain enums, not typesayf, old style
enum unsafeEnum {
  FIRST,
  SECOND
};

//good, using enum classes ensure type safety, new style
//can't compare these to an integer
enum class safeEnum {
  FIRST,
  SECOND
};

int main() {

  //using an initialiser list
  const safeEnum safeTest { safeEnum::FIRST };
  const unsafeEnum unsafeTest { unsafeEnum::SECOND };

  //error, invalid operands to binare expression
  //if (safeTest == 1)
  //  std::cout << "can't compare the safe enum to a number" << std::endl;

  if (safeTest == safeEnum::FIRST)
    std::cout << "can compare the safe enum to a an enum" << std::endl;

  //dangerous comparison because of type coercion
  if (unsafeTest == 1)
    std::cout << "can compare the unsafe enum to a number" << std::endl;

  return 0;
}
