/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestRover.h
 * Author: 4327098
 *
 * Created on Oct 31, 2017, 1:37:01 AM
 */

#ifndef TESTROVER_H
#define TESTROVER_H

#include <cppunit/extensions/HelperMacros.h>

class TestRover : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestRover);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    TestRover();
    virtual ~TestRover();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif /* TESTROVER_H */

