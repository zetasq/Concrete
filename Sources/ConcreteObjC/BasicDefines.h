//
//  BasicDefines.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#pragma once

#import <Foundation/Foundation.h>

#pragma mark - Type Infer

#if defined(__cplusplus)

#define let auto const
#define var auto

#else

#define let const __auto_type
#define var __auto_type

#endif

#pragma mark - Static Variable

#define CreateOnce(expr) ({ \
  static dispatch_once_t onceToken; \
  static __typeof__(expr) staticVar; \
  dispatch_once(&onceToken, ^{ \
    staticVar = expr; \
  }); \
  staticVar; \
})

#pragma mark - Casting

#define ObjectIsKindOf(x, c) ({ \
  id const __val = x; \
  (BOOL)([__val isKindOfClass:[c class]]); \
})

#define ObjectIsMemberOf(x, c) ({ \
  id const __val = x; \
  (BOOL)([__val isMemberOfClass:[c class]]); \
})

/// Ensure that class is of certain kind
#define DynamicCast(x, c) ({ \
  id const __val = x; \
  (c *)(ObjectIsKindOf(__val, c) ? __val : nil); \
})

/// Ensure that class is of certain kind, assuming it is subclass restricted
#define DynamicStrictCast(x, c) ({ \
  id const __val = x; \
  (c *)(ObjectIsMemberOf(__val, c) ? __val : nil); \
})

#pragma mark - Equality

/**
 @abstract Correctly equates two objects, including cases where both objects are nil. The latter is a case where `isEqual:` fails.
 @param lhs The first object in the comparison. Can be nil.
 @param rhs The second object in the comparison. Can be nil.
 @result YES if the objects are equal, including cases where both object are nil.
 */
static inline BOOL ObjectIsEqual(id<NSObject> lhs, id<NSObject> rhs)
{
  return lhs == rhs || [lhs isEqual:rhs];
}
