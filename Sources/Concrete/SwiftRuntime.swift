//
//  SwiftRuntime.swift
//  
//
//  Created by Zhu Shengqi on 2019/12/7.
//

import Foundation

public enum SwiftRuntime {
  
  public static func objectIsKindOf(_ object: AnyObject, baseType: AnyClass) -> Bool {
    let objectClassChain = sequence(first: Mirror(reflecting: object), next: { $0.superclassMirror })
    
    return objectClassChain.first(where: { $0.subjectType == baseType }) != nil
  }
  
}

