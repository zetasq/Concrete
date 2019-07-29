//
//  Scope.m
//  
//
//  Created by Zhu Shengqi on 29/7/2019.
//

#import "Scope.h"

void _executeCleanupBlock(_CleanupBlock _Nonnull * _Nonnull block __attribute__((__noescape__)))
{
  (*block)();
}
