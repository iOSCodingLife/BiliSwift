//
//  LHSaModel.h
//  biUp
//
//  Created by snowimba on 15/12/7.
//  Copyright © 2015年 snowimba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LHSaModel : NSObject
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *icon;

+(instancetype)saCellWithDict:(NSDictionary *)dict;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com