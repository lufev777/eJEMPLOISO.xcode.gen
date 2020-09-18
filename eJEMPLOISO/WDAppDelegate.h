//
//  WDAppDelegate.h
//
//  Created by luis on 18/09/2020.
//  Copyright . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	BOOL bBackground;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

