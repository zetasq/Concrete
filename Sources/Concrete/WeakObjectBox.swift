//
//  File.swift
//  
//
//  Created by Zhu Shengqi on 2019/12/7.
//

import Foundation

public final class WeakObjectBox<T: AnyObject> {
  
  public private(set) weak var object: T?
  
  public init(object: T) {
    self.object = object
  }
  
}

public final class WeakObjectOpaqueBox {
  
  public private(set) weak var object: AnyObject?
  
  public init(object: AnyObject?) {
    self.object = object
  }
}
