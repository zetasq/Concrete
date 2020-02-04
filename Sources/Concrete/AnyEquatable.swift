//
//  AnyEquatable.swift
//  
//
//  Created by Zhu Shengqi on 2020/2/4.
//

import Foundation

public struct AnyEquatable: Equatable {
  private let value: Any
  private let equalityChecker: (Any) -> Bool
  
  public init<T: Equatable>(_ value: T) {
    self.value = value
    self.equalityChecker = { ($0 as? T) == value }
  }
  
  public static func ==(lhs: AnyEquatable, rhs: AnyEquatable) -> Bool {
    return lhs.equalityChecker(rhs.value)
  }
  
}
