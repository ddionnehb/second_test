//
//  AppDelegate.h
//  testbed
//
//  Created by Dennis Dionne on 5/21/11.
//  Copyright Self 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
