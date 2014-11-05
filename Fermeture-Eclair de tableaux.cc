#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Tab;

template<typename V1>
void affiche(V1 const& ligne) {
  cout << '|';
  for (auto el : ligne) {
    cout << el << " ";
  }
  cout << '|' << endl;
}

Tab entrelace(Tab const& t1, Tab const& t2) {
  Tab out;
  for (size_t i(0); i < t1.size() or i < t2.size(); ++i) {
    if (i < t1.size()) out.push_back(t1[i]); // on pourrait faire une fonction
    if (i < t2.size()) out.push_back(t2[i]);
  }
  return out;
}

int main()
{
  affiche(entrelace({1,2,3}, {4,5,6}));
  affiche(entrelace({1,2,3}, {4,5,6,7,8}));
  affiche(entrelace({1,2,3}, Tab()));
  affiche(entrelace(Tab(), {4,5,6,7,8}));
  affiche(entrelace(Tab(), Tab()));
  affiche(entrelace({1,2,3,7,8}, {4,5,6}));
  affiche(entrelace({1}, {4,5,6}));
  affiche(entrelace({1,2,3}, {4}));

  return 0;
}
