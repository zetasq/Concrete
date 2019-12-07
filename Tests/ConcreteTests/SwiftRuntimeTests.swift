//
//  SwiftRuntimeTests.swift
//  
//
//  Created by Zhu Shengqi on 2019/12/7.
//

import XCTest
@testable import Concrete

final class SwiftRuntimeTests: XCTestCase {
  
  func testObjectTypeMatching() {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct
    // results.
    //        XCTAssertEqual(Concrete().text, "Hello, World!")
    class BaseClass {}
    class SubClass: BaseClass {}
    
    let obj: BaseClass = SubClass()
    XCTAssert(SwiftRuntime.objectIsKindOf(obj, baseType: BaseClass.self))
  }
  
  
  
  static var allTests = [
    ("testObjectTypeMatching", testObjectTypeMatching),
  ]
}
