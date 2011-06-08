//
//  ServicePublisher.h
//  BonjourTester
//
//  Created by Jamie Murai on 11-04-22.
//  Copyright 2011 Jamie Murai. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ServicePublisher : NSObject <NSNetServiceDelegate> {
@private
    NSTextField *nameField;
    NSTextField *typeField;
    NSTextField *portField;
    
    NSMutableArray *services;
}

@property (nonatomic, retain) IBOutlet NSTextField *nameField;
@property (nonatomic, retain) IBOutlet NSTextField *typeField;
@property (nonatomic, retain) IBOutlet NSTextField *portField;

- (IBAction)publishService:(id)sender;

@end
