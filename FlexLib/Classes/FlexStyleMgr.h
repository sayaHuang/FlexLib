/**
 * Copyright (c) 2017-present, zhenglibao, Inc.
 * email: 798393829@qq.com
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */



#import <Foundation/Foundation.h>

@interface FlexAttr : NSObject<NSCoding>
@property(nonatomic,strong) NSString* name ;
@property(nonatomic,strong) NSString* value ;

-(BOOL)isValid;

@end

@interface FlexStyleMgr : NSObject

-(NSArray<FlexAttr*>*)getStyle:(NSString*)fileName
                     StyleName:(NSString*)styleName;

-(NSArray<FlexAttr*>*)getStyleByRefPath:(NSString*)ref;

- (void)clearStyle;

+(instancetype)instance;

@end

@interface FlexStyleGroup : NSObject<NSCoding>
{
    NSMutableDictionary<NSString*,NSArray<FlexAttr*>*>* _stylesByName;
}

-(BOOL)loadFromFile:(NSString*)stylePath;

-(NSArray*)getStyleByName:(NSString*)styleName;

@end
