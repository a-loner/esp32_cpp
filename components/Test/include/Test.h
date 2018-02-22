#ifndef TEST_H
#define TEST_H

class Test {
 public:
  Test();
  ~Test();

  void toggleVal();
  int getVal();
 private:
  int val;
};

#endif
