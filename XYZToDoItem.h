//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by babykang on 14-9-13.
//  Copyright (c) 2014年 Fiona. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSData *creationDate;

@end
