//
//  VariadicSubscription.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#pragma once

#import "CommonMacros.h"

#define metamacro_at(N, ...) \
        metamacro_expand_then_cat(metamacro_at, N)(__VA_ARGS__)

#define metamacro_argcount(...) \
        metamacro_at(20, __VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)

#define metamacro_at0(...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at1(_0, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at2(_0, _1, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at3(_0, _1, _2, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at4(_0, _1, _2, _3, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at5(_0, _1, _2, _3, _4, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at6(_0, _1, _2, _3, _4, _5, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at7(_0, _1, _2, _3, _4, _5, _6, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at8(_0, _1, _2, _3, _4, _5, _6, _7, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at9(_0, _1, _2, _3, _4, _5, _6, _7, _8, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at16(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at17(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at18(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at19(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, ...) \
metamacro_first(__VA_ARGS__)

#define metamacro_at20(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, ...) \
metamacro_first(__VA_ARGS__)
