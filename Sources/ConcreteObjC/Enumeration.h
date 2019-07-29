//
//  Enumeration.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#pragma once

#import <Foundation/Foundation.h>

@protocol FastEnumeration <NSFastEnumeration>
- (id)enumeratedType;
@end

#define foreach(ELEMENT, COLLECTION) \
        for (__unsafe_unretained __typeof__((COLLECTION).enumeratedType) ELEMENT in (COLLECTION))

@interface NSArray <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSSet <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSDictionary <KeyType, ValueType> (Enumeration) <FastEnumeration>
- (KeyType)enumeratedType;
@end

@interface NSOrderedSet <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSPointerArray (Enumeration) <FastEnumeration>
- (void *)enumeratedType;
@end

@interface NSHashTable <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end

@interface NSMapTable <KeyType, ValueType> (Enumeration) <FastEnumeration>
- (KeyType)enumeratedType;
@end

@interface NSEnumerator <ElementType> (Enumeration) <FastEnumeration>
- (ElementType)enumeratedType;
@end
