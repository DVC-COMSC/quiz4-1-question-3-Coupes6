#include <iostream>
using namespace std;
int main() {
  int nm1, nm2, nm3;
  int max, mid, min;
  cin >> nm1 >> nm2 >> nm3;

if ((nm1 > nm2) && (nm1 > nm3)) {
  max = nm1;
  if ((nm2 > nm3)) {
    mid = nm2;
    min = nm3;
  }
else {
  mid = nm3;
  min = nm2;
}
}
 
else if ((nm2 > nm1) && (nm2 > nm3)) {
max = nm2;
  if ((nm1 > nm3)) {
    mid = nm1;
    min = nm3;
  }
else {
  mid = nm3;
  min = nm1;
}
}

else if ((nm3 > nm2) && (nm3 > nm1)) {
max = nm3;
  if ((nm1 > nm2)) {
    mid = nm1;
    min = nm2;
  }
else {
  mid = nm2;
  min = nm1;
}
}

cout << "MAX: " << max << endl;
cout << "MID: " << mid << endl;
cout << "MIN: " << min << endl;
  return (0);
}





