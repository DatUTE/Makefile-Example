# demostrate automake

--------------------
- How to run
-1. Makefile
    + prepare: Run the command below to initialize what is required for Automake
    aclocal
    automake --add-missing
    autoreconf
    touch NEWS REAMKE AUTHORS ChangeLog (optional)
    automake

    + execute with No BUILD-TARGET:
    ./configure
    make
    main

    + execute with BUILD-TARGET:
    ./configure BUILD_TARGET=automotiveA
    make
    main
-2. Sub-Makefile
    - same as makfile with BUILD_TARGET, but BUILD_TARGET = automotive1 or 2 or 3
    - if we change source file in sw just call "make"
    - else we need to run
        autoreconf
        ./configure BUILD_TARGET=automotive1 or 2 or 3
        make
        main




