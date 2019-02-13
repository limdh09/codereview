#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include "./goods.h"

typedef enum {
	kPrice = 0,
    kIndex = 1
} SortType;

// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class Shopping{
 public:
  void PushList(Goods object);
  Goods GetLastElement();
  void PrintList();
  void SortByPrice();
  void SortByIndex();
  void SortByPriceOrIndex(SortType);

 private:
  std::vector<Goods> shopping_list_;
};

#endif  // SHOPPING_H_
