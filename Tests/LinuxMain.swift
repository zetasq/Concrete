import XCTest

import ConcreteTests

var tests = [XCTestCaseEntry]()
tests += ConcreteTests.allTests()
XCTMain(tests)
