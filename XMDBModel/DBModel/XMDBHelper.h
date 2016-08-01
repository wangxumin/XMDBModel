//
//  XMDataBase.h
//  XMBaseModel
//
//  Created by 王续敏 on 16/8/1.
//  Copyright © 2016年 王续敏. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "FMDB.h"

@interface XMDBHelper : NSObject

@property (nonatomic, retain, readonly) FMDatabaseQueue *dbQueue;

+ (XMDBHelper *)shareInstance;

+ (NSString *)dbPath;

@end
