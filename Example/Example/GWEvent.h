//
//  GWEvent.h
//  Example
//
//  Created by Giovanni on 14/06/14.
//  Copyright (c) 2014 Monospace Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GWEvent : NSObject

@property (nonatomic, strong) NSNumber *remoteID;
@property (nonatomic, strong) NSDate *start;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *location;
@property (nonatomic, strong) NSNumber *timeToBeDecided;
@property (nonatomic, strong) NSNumber *dateToBeDecided;

- (NSDate *)day; // Derived attribute to make it easy to sort events into days by equality


@end
