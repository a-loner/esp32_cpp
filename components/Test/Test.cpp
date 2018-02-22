#include<Test.h>

Test::Test() {
  val = 1;
}

Test::~Test() {

}

void Test::toggleVal() {
  this->val = 1 - this->val;
}

int Test::getVal() {
  return this->val;
}
