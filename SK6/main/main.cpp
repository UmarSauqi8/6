#include <iostream>
#include "../base/input.h"
#include "../base/proses.h"
#include "../base/output.h"
using namespace std;

int main {
  Input Input;
  input.cetak();
  input.ToFile();

  Proses proses;
  proses.ToFile();
  proses.cetak();
  
  Output output;
  output.cetak();
  output.getData();
}