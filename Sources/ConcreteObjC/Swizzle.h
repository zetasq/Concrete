//
//  Swizzle.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

void SwizzleInstanceMethod(Class class, SEL originalSelector, SEL swizzledSelector);

void SwizzleClassMethod(Class class, SEL originalSelector, SEL swizzledSelector);

NS_ASSUME_NONNULL_END
