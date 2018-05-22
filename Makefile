play:
	echo -n > gamestate
	while $(MAKE) turn; do :; done

turn:
	g++-6 -Wall -o /dev/null '1;auto state = R"delim(.c++' 2>&1 | tee gamestate.new
	mv gamestate.new gamestate
