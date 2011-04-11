//
//  UIColor_DigitalColorMeterAppDelegate.h
//  UIColor+DigitalColorMeter
//
//  Created by Collin Ruffenach on 4/11/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIColor_DigitalColorMeterViewController;

@interface UIColor_DigitalColorMeterAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIColor_DigitalColorMeterViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIColor_DigitalColorMeterViewController *viewController;

@end

