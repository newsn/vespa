# Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
vespa_add_executable(searchlib_dictionary_test_app TEST
    SOURCES
    dictionary_test.cpp
    DEPENDS
    searchlib
    searchlib_test
)
vespa_add_test(NAME searchlib_dictionary_test_app COMMAND searchlib_dictionary_test_app)
