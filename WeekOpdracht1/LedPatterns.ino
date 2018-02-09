#define pattern1Length 8
boolean pattern1[pattern1Length][8] = {
  {true, false, false, false, false, false, false, false },
  {false, true, false, false, false, false, false, false },
  {false, false, true, false, false, false, false, false },
  {false, false, false, true, false, false, false, false },
  {false, false, false, false, true, false, false, false },
  {false, false, false, false, false, true, false, false },
  {false, false, false, false, false, false, true, false },
  {false, false, false, false, false, false, false, true },
};

#define pattern2Length 6
boolean pattern2[pattern2Length][8] = {
  {false, false, false, true, true, false, false, false },
  {false, false, true, false, false, true, false, false },
  {false, true, false, false, false, false, true, false },
  {true, false, false, false, false, false, false, true },
  {false, true, false, false, false, false, true, false },
  {false, false, true, false, false, true, false, false },
};

#define pattern3Length 12
boolean pattern3[pattern3Length][8] = {
  {true, false, true, false, false, true, false, true },
  {false, false, false, false, false, false, false, false },
  {true, false, true, false, false, true, false, true },
  {false, false, false, false, false, false, false, false },
  {true, false, true, false, false, true, false, true },
  {false, false, false, false, false, false, false, false },

  {false, true, false, true, true, false, true, false },
  {false, false, false, false, false, false, false, false },
  {false, true, false, true, true, false, true, false },
  {false, false, false, false, false, false, false, false },
  {false, true, false, true, true, false, true, false },
  {false, false, false, false, false, false, false, false }
};

int getPattern1(int frame) {
  return pattern1[frame];
}
int getPattern1Length() {
  return pattern1Length;
}

int getPattern2(int frame) {
  return pattern2[frame];
}
int getPattern2Length() {
  return pattern2Length;
}

int getPattern3(int frame) {
  return pattern3[frame];
}
int getPattern3Length() {
  return pattern3Length;
}
