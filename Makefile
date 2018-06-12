play:
	g++-8 2>/dev/null 3>gamestate || while $(MAKE) turn; do :; done

turn:
	g++-8 -Wall -o /dev/null '1;auto state = R"delim(.c++' 2>&1 | tee gamestate.h
	g++-8 -E gamestate.h > gamestate
