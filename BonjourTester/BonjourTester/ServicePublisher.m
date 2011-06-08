//
//  ServicePublisher.m
//  BonjourTester
//
//  Created by Jamie Murai on 11-04-22.
//  Copyright 2011 Jamie Murai. All rights reserved.
//

#import "ServicePublisher.h"


@implementation ServicePublisher

@synthesize nameField, typeField, portField;

- (IBAction)publishService:(id)sender {
    if (services == nil) {
        services = [[NSMutableArray alloc] init];
    }
    
    NSNetService *svc = [[NSNetService alloc] initWithDomain:@"" 
                                                        type:[typeField stringValue] 
                                                        name:[nameField stringValue]
                                                        port:[[portField stringValue] intValue]];
    [svc scheduleInRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];
    [svc setDelegate:self];
    [svc publish];
    [services addObject:svc];
    [svc release];
}

- (void)dealloc {
    [services release];
    [super dealloc];
}

@end
