//
//  VariadicMapping.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#pragma once

#import "VariadicSubscription.h"

#define metamacro_foreach_ctx(MACRO, SEP, CONTEXT, ...) \
        metamacro_expand_then_cat(metamacro_foreach_ctx, metamacro_argcount(__VA_ARGS__))(MACRO, SEP, CONTEXT, __VA_ARGS__)

#define metamacro_foreach_ctx0(MACRO, SEP, CONTEXT)
#define metamacro_foreach_ctx1(MACRO, SEP, CONTEXT, _0) MACRO(0, CONTEXT, _0)

#define metamacro_foreach_ctx2(MACRO, SEP, CONTEXT, _0, _1) \
        metamacro_foreach_ctx1(MACRO, SEP, CONTEXT, _0) \
        SEP \
        MACRO(1, CONTEXT, _1)

#define metamacro_foreach_ctx3(MACRO, SEP, CONTEXT, _0, _1, _2) \
        metamacro_foreach_ctx2(MACRO, SEP, CONTEXT, _0, _1) \
        SEP \
        MACRO(2, CONTEXT, _2)

#define metamacro_foreach_ctx4(MACRO, SEP, CONTEXT, _0, _1, _2, _3) \
        metamacro_foreach_ctx3(MACRO, SEP, CONTEXT, _0, _1, _2) \
        SEP \
        MACRO(3, CONTEXT, _3)

#define metamacro_foreach_ctx5(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4) \
        metamacro_foreach_ctx4(MACRO, SEP, CONTEXT, _0, _1, _2, _3) \
        SEP \
        MACRO(4, CONTEXT, _4)

#define metamacro_foreach_ctx6(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5) \
        metamacro_foreach_ctx5(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4) \
        SEP \
        MACRO(5, CONTEXT, _5)

#define metamacro_foreach_ctx7(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6) \
        metamacro_foreach_ctx6(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5) \
        SEP \
        MACRO(6, CONTEXT, _6)

#define metamacro_foreach_ctx8(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7) \
        metamacro_foreach_ctx7(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6) \
        SEP \
        MACRO(7, CONTEXT, _7)

#define metamacro_foreach_ctx9(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8) \
        metamacro_foreach_ctx8(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7) \
        SEP \
        MACRO(8, CONTEXT, _8)

#define metamacro_foreach_ctx10(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9) \
        metamacro_foreach_ctx9(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8) \
        SEP \
        MACRO(9, CONTEXT, _9)

#define metamacro_foreach_ctx11(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
        metamacro_foreach_ctx10(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9) \
        SEP \
        MACRO(10, CONTEXT, _10)

#define metamacro_foreach_ctx12(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
        metamacro_foreach_ctx11(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
        SEP \
        MACRO(11, CONTEXT, _11)

#define metamacro_foreach_ctx13(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
        metamacro_foreach_ctx12(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
        SEP \
        MACRO(12, CONTEXT, _12)

#define metamacro_foreach_ctx14(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
        metamacro_foreach_ctx13(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12) \
        SEP \
        MACRO(13, CONTEXT, _13)

#define metamacro_foreach_ctx15(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
        metamacro_foreach_ctx14(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13) \
        SEP \
        MACRO(14, CONTEXT, _14)

#define metamacro_foreach_ctx16(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
        metamacro_foreach_ctx15(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14) \
        SEP \
        MACRO(15, CONTEXT, _15)

#define metamacro_foreach_ctx17(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
        metamacro_foreach_ctx16(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15) \
        SEP \
        MACRO(16, CONTEXT, _16)

#define metamacro_foreach_ctx18(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17) \
        metamacro_foreach_ctx17(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16) \
        SEP \
        MACRO(17, CONTEXT, _17)

#define metamacro_foreach_ctx19(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18) \
        metamacro_foreach_ctx18(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17) \
        SEP \
        MACRO(18, CONTEXT, _18)

#define metamacro_foreach_ctx20(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19) \
        metamacro_foreach_ctx19(MACRO, SEP, CONTEXT, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18) \
        SEP \
        MACRO(19, CONTEXT, _19)
