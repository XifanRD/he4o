//
//  AIAlgNodeBase.m
//  SMG_NothingIsAll
//
//  Created by jia on 2019/1/3.
//  Copyright © 2019年 XiaoGang. All rights reserved.
//

#import "AIAlgNodeBase.h"

@implementation AIAlgNodeBase

-(NSMutableArray *)absPorts{
    if (_absPorts == nil) {
        _absPorts = [NSMutableArray new];
    }
    return _absPorts;
}

-(NSMutableArray *)refPorts{
    if (_refPorts == nil) {
        _refPorts = [NSMutableArray new];
    }
    return _refPorts;
}


/**
 *  MARK:--------------------NSCoding--------------------
 */
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if (self) {
        self.absPorts = [aDecoder decodeObjectForKey:@"absPorts"];
        self.refPorts = [aDecoder decodeObjectForKey:@"refPorts"];
        self.value_ps = [aDecoder decodeObjectForKey:@"value_ps"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder {
    [super encodeWithCoder:aCoder];
    [aCoder encodeObject:self.absPorts forKey:@"absPorts"];
    [aCoder encodeObject:self.refPorts forKey:@"refPorts"];
    [aCoder encodeObject:self.value_ps forKey:@"value_ps"];
}

@end
