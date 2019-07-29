//
//  KeyPath.h
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#pragma once

#import <Foundation/Foundation.h>

#if defined(DEBUG) && !defined(NDEBUG)
#define keyPath(OBJECT, PROPERTY) \
        ((((__typeof__(OBJECT))nil).PROPERTY, #PROPERTY))
#else
#define keyPath(OBJECT, PROPERTY) \
        #PROPERTY
#endif
