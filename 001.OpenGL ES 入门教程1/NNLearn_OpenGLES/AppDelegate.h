//
//  AppDelegate.h
//  NNLearn_OpenGLES
//
//  Created by liupengkun on 2018/7/19.
//  Copyright © 2018年 以梦为马. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

