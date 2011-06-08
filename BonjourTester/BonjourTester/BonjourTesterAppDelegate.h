//
//  BonjourTesterAppDelegate.h
//  BonjourTester
//
//  Created by Jamie Murai on 11-04-22.
//  Copyright 2011 Jamie Murai. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BonjourTesterAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
