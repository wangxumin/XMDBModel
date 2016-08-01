//
//  User.m
//  XMBaseModel
//
//  Created by 王续敏 on 16/8/1.
//  Copyright © 2016年 王续敏. All rights reserved.
//

#import "XMUserModel.h"
#import "XMDBHelper.h"

@interface XMUserModel ()

@property (nonatomic, copy) NSString *duty;

@end

@implementation XMUserModel

#pragma mark - override method

+(NSArray *)transients
{
    return [NSArray arrayWithObjects:@"duty",nil];
}

@end
