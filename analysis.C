#define analysis_cxx
#include <TFile.h>

int main() {
  TFile foo("foo.root", "RECREATE");
  return 0;
}
