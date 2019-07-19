import XCTest
@testable import Concrete

final class ConcreteTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(Concrete().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
