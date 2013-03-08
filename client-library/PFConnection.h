//
//  PFConnection.h
//  PerceroFramework
//
//  Created by John Coumerilh on 2/26/13.
//  Copyright (c) 2013 John Coumerilh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PFConnection : NSObject 
- (void) listenForConnection:(SEL)selector target:(UIViewController *)clientViewController;
- (void) loginAndListenForCompletion:(SEL)selector target:(UIViewController *)clientViewController;
@end
                