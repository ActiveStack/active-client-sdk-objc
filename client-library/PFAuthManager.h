//
//  PFAuthManager.h
//  Percero
//
//  Created by Jeff Wolski on 4/16/13.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PFOauthViewController.h"

@protocol PFAuthManagerDelegate <NSObject>

- (void) authenticationSucceeded;
- (void) authenticationFailed;

@end

@interface PFAuthManager : NSObject <PFGitHubOauthDelegate>
+ (NSArray *) oauthProviderKeys;
+ (void) loginWithOauthKeypath:(NSString *) keypath delegate:(id<PFAuthManagerDelegate>)delegate;
+ (void) loginWithAuthenticationProvider:(NSString *)authProvider credential:(NSString *)credential delegate:(id<PFAuthManagerDelegate>)delegate;
@property (nonatomic, weak) id<PFAuthManagerDelegate> delegate;
@end