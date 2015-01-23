//
//  GWEvent.m
//  Example
//
//  Created by Giovanni on 14/06/14.
//  Copyright (c) 2014 Monospace Ltd. All rights reserved.
//

#import "GWEvent.h"

@implementation GWEvent

- (NSDate *)day
{
    return [self.start beginningOfDay];
}

@end
