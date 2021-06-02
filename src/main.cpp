#include <iostream>
#include <vector>

int main(){
  std::cout << "Task_2" << std::endl;

  std::vector<int> vec = {7, 11, 2, 15};
  const int res = 9;
  int lt = 0;
  int rt = vec.size() - 1;
  while (lt != rt){       
    int cursum = vec[lt] + vec[rt];
    if (cursum < res)
      lt++;
    else if (cursum > res)
      rt--;
    else{
      std::cout << "values: " << vec[lt] << " " << vec[rt] << std::endl;
      break;
    }
  }
  return 0;
}

// Вам даётся массив целых чисел и одно число -- результат. 
// Необходимо найти в массиве 2 числа, сумма 
// которых будет давать результат, и вывести 
// их на экран. Гарантируется, что только одна 
// пара чисел в массиве даёт в сумме результат.
// Пример:
// a = {2, 7, 11, 15}. Результат = 9
// 2 + 7 = 9, так что надо вывести числа 2 и 7