//
//  Scope.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#pragma once

#import <Foundation/Foundation.h>

#import "MetaMacro/CommonMacros.h"
#import "MetaMacro/VariadicSubscription.h"
#import "MetaMacro/VariadicMapping.h"

#pragma mark - Keywordify
// Details about the choice of backing keyword:
//
// The use of @try/@catch/@finally can cause the compiler to suppress
// return-type warnings.
// The use of @autoreleasepool {} is not optimized away by the compiler,
// resulting in superfluous creation of autorelease pools.
//
// Since neither option is perfect, and with no other alternatives, the
// compromise is to use @autorelease in DEBUG builds to maintain compiler
// analysis, and to use @try/@catch otherwise to avoid insertion of unnecessary
// autorelease pools.
#if defined(DEBUG) && !defined(NDEBUG)
#define _keywordify autoreleasepool {}
#else
#define _keywordify try {} @catch (...) {}
#endif

#pragma mark - Defer

typedef void (^_CleanupBlock)(void);

FOUNDATION_EXTERN void _executeCleanupBlock(_CleanupBlock _Nonnull * _Nonnull block __attribute__((__noescape__)));

#define defer \
        _keywordify \
        _CleanupBlock metamacro_expand_then_cat(_deferredBlock_, __LINE__)  __attribute__((cleanup(_executeCleanupBlock), unused)) = ^

#pragma mark - Weakify

#define _weakify_iter(INDEX, CONTEXT, VAR) \
        __weak __typeof__(VAR) metamacro_cat(VAR, _weak_) = VAR;

#define weakify(...) \
        _keywordify \
        metamacro_foreach_ctx(_weakify_iter,,, __VA_ARGS__)

#pragma mark - Unsafeify

#define _unsafeify_iter(INDEX, CONTEXT, VAR) \
        __unsafe_unretained __typeof__(VAR) metamacro_cat(VAR, _weak_) = VAR;

#define unsafeify(...) \
        _keywordify \
        metamacro_foreach_ctx(_unsafeify_iter,,, __VA_ARGS__)

#pragma mark - Strongify

#define _strongify_iter(INDEX, CONTEXT, VAR) \
        __strong __typeof__(VAR) VAR = metamacro_cat(VAR, _weak_);

#define strongify(...) \
        _keywordify \
        metamacro_foreach_ctx(_strongify_iter,,, __VA_ARGS__)
