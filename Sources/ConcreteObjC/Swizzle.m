//
//  Swizzle.m
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#import "Swizzle.h"
#import "BasicDefines.h"

#import <objc/runtime.h>

// See https://nshipster.com/method-swizzling/

void SwizzleInstanceMethod(Class class, SEL originalSelector, SEL swizzledSelector)
{
  let originalMethod = class_getInstanceMethod(class, originalSelector);
  let swizzledMethod = class_getInstanceMethod(class, swizzledSelector);
  
  let didAddMethod = class_addMethod(class, 
                                     originalSelector,
                                     method_getImplementation(swizzledMethod),
                                     method_getTypeEncoding(swizzledMethod));
  
  if (didAddMethod) {
    class_replaceMethod(class, 
                        swizzledSelector, 
                        method_getImplementation(originalMethod),
                        method_getTypeEncoding(originalMethod));
  } else {
    method_exchangeImplementations(originalMethod, swizzledMethod);
  }
}

void SwizzleClassMethod(Class class, SEL originalSelector, SEL swizzledSelector)
{
  class = object_getClass(class);
  
  let originalMethod = class_getClassMethod(class, originalSelector);
  let swizzledMethod = class_getClassMethod(class, swizzledSelector);
  
  let didAddMethod = class_addMethod(class,
                                       originalSelector,
                                       method_getImplementation(swizzledMethod),
                                       method_getTypeEncoding(swizzledMethod));
    
    if (didAddMethod) {
      class_replaceMethod(class, 
                          swizzledSelector, 
                          method_getImplementation(originalMethod),
                          method_getTypeEncoding(originalMethod));
    } else {
      method_exchangeImplementations(originalMethod, swizzledMethod);
    }  
}
