//
//  Depart.h
//  XMBaseModel
//
//  Created by 王续敏 on 16/8/1.
//  Copyright © 2016年 王续敏. All rights reserved.
//
#import "XMDBModel.h"

@interface XMDepartModel : XMDBModel

/** 部门编号 */
@property (nonatomic, copy)     NSString                    *departNum;
/** 部门名称 */
@property (nonatomic, copy)     NSString                    *departName;

@end
