#include <iostream>

template<class T> struct S {
  static constexpr int v = 0;
};

auto State =
#include "gamestate"
0;

template<int s> struct Compute {
  // should not be used.
};

template<> struct Compute<-1> {
  struct [[deprecated]] north { // [1;1H[2JYou are dead.[K[30m)delim";template<>struct S<int>{static constexpr int v=-1;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JYou are dead.[K[30m)delim";template<>struct S<int>{static constexpr int v=-1;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JYou are dead.[K[30m)delim";template<>struct S<int>{static constexpr int v=-1;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JYou are dead.[K[30m)delim";template<>struct S<int>{static constexpr int v=-1;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<0> {
  struct [[deprecated]] north { // [1;1H[2JTurning north, you find a little brook.[K[30m)delim";template<>struct S<int>{static constexpr int v=1;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JFurther south, an old path, maybe even a historic road, stretches from east to west.[K[30m)delim";template<>struct S<int>{static constexpr int v=2;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JLook, it said "north" or "south", ok?[K[30m)delim";template<>struct S<int>{static constexpr int v=0;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JLook, it said "north" or "south", ok?[K[30m)delim";template<>struct S<int>{static constexpr int v=0;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<1> {
  struct [[deprecated]] north { // [1;1H[2JThe polar region seems particularly cold today.[K[30m)delim";template<>struct S<int>{static constexpr int v=3;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JYou are back to where you started your journey.[K[30m)delim";template<>struct S<int>{static constexpr int v=0;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JThere are only dense woods that way.[K[30m)delim";template<>struct S<int>{static constexpr int v=1;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JThere are only dense woods that way.[K[30m)delim";template<>struct S<int>{static constexpr int v=1;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<2> {
  struct [[deprecated]] north { // [1;1H[2JYou are back to where you started your journey.[K[30m)delim";template<>struct S<int>{static constexpr int v=0;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JThere are only dense woods that way.[K[30m)delim";template<>struct S<int>{static constexpr int v=2;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JAfter a while you find your path blocked by a steep cliff.[K[30m)delim";template<>struct S<int>{static constexpr int v=2;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JYou come to a deserted village. In one of the huts, you find a stack of hides and a few very warm snowsuits.[K[30m)delim";template<>struct S<int>{static constexpr int v=4;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<3> {
  struct [[deprecated]] north { // [1;1H[2JYour equipment does not allow you to travel these icy parts.[K[30m)delim";template<>struct S<int>{static constexpr int v=3;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JYour equipment does not allow you to travel these icy parts.[K[30m)delim";template<>struct S<int>{static constexpr int v=3;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JYour equipment does not allow you to travel these icy parts.[K[30m)delim";template<>struct S<int>{static constexpr int v=3;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JThe brook is still there (unsurprisingly).[K[30m)delim";template<>struct S<int>{static constexpr int v=1;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<4> {
  struct [[deprecated]] north { // [1;1H[2JThe village is surrounded by a palisade towards the north.[K[30m)delim";template<>struct S<int>{static constexpr int v=4;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JA deep moat protects the village from the south. You don't dare to swim.[K[30m)delim";template<>struct S<int>{static constexpr int v=4;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JThe landscape changes into a vast desert. Given you don't have any water with you, it seems unwise to travel here (but you can of course try).[K[30m)delim";template<>struct S<int>{static constexpr int v=5;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JYou travel back eastwards on the old road and return to where you first entered it.[K[30m)delim";template<>struct S<int>{static constexpr int v=6;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<5> {
  struct [[deprecated]] north { // [1;1H[2JThe village is surrounded by a palisade towards the north.[K[30m)delim";template<>struct S<int>{static constexpr int v=4;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JA deep moat protects the village from the south. You don't dare to swim.[K[30m)delim";template<>struct S<int>{static constexpr int v=4;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JAfter a few hours, the midday sun comes to full power. You regret your folly (for a while).[K[30m)delim";template<>struct S<int>{static constexpr int v=-1;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JYou travel back eastwards on the old road and return to where you first entered it.[K[30m)delim";template<>struct S<int>{static constexpr int v=6;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<6> {
  struct [[deprecated]] north { // [1;1H[2JYou are back to where you started your journey.[K[30m)delim";template<>struct S<int>{static constexpr int v=7;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JThere are only dense woods that way.[K[30m)delim";template<>struct S<int>{static constexpr int v=6;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JAfter a while you find your path blocked by a steep cliff.[K[30m)delim";template<>struct S<int>{static constexpr int v=6;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JYou come to a deserted village. In one of the huts, you find a stack of hides and a few very warm snowsuits.[K[30m)delim";template<>struct S<int>{static constexpr int v=4;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<7> {
  struct [[deprecated]] north { // [1;1H[2JTurning north, you find a little brook.[K[30m)delim";template<>struct S<int>{static constexpr int v=8;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JFurther south, an old path, maybe even a historic road, stretches from east to west.[K[30m)delim";template<>struct S<int>{static constexpr int v=6;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JLook, it said "north" or "south", ok?[K[30m)delim";template<>struct S<int>{static constexpr int v=7;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JLook, it said "north" or "south", ok?[K[30m)delim";template<>struct S<int>{static constexpr int v=7;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<8> {
  struct [[deprecated]] north { // [1;1H[2JThe polar region seems particularly cold today, luckily you still carry that snowsuit from the village.[K[30m)delim";template<>struct S<int>{static constexpr int v=9;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JYou are back to where you started your journey.[K[30m)delim";template<>struct S<int>{static constexpr int v=7;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JThere are only dense woods that way.[K[30m)delim";template<>struct S<int>{static constexpr int v=8;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JThere are only dense woods that way.[K[30m)delim";template<>struct S<int>{static constexpr int v=8;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<9> {
  struct [[deprecated]] north { // [1;1H[2JYou put on the snowsuit and explore the icy wilderness. After a while you discover the amulet of yendor, i.e. you have won the game.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JYou put on the snowsuit and explore the icy wilderness. After a while you discover the amulet of yendor, i.e. you have won the game.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JYou put on the snowsuit and explore the icy wilderness. After a while you discover the amulet of yendor, i.e. you have won the game.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JThe brook is still there (unsurprisingly).[K[30m)delim";template<>struct S<int>{static constexpr int v=8;};int _=0
    static constexpr int value() { return 0; }
  };
};

template<> struct Compute<10> {
  struct [[deprecated]] north { // [1;1H[2JYou have won the game. Please stop abusing the poor compiler.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] south { // [1;1H[2JYou have won the game. Please stop abusing the poor compiler.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] east { // [1;1H[2JYou have won the game. Please stop abusing the poor compiler.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };

  struct [[deprecated]] west { // [1;1H[2JYou have won the game. Please stop abusing the poor compiler.[K[30m)delim";template<>struct S<int>{static constexpr int v=10;};int _=0
    static constexpr int value() { return 0; }
  };
}


int main(void) {
  #warning [5F[J[10E[0mPlease enter a direction (e.g. "north" or "south"), confirm with 2x Ctrl-D.

  Compute<S<int>::v>::
  #include "/dev/stdin"
  I;
  
  return I.value();
}
