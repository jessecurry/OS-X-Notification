//
//  WKAppController.h
//  WaniKani Notifier
//
//  Created by Sebastian Szturo on 08.12.12.
//  Copyright (c) 2012 Sebastian Szturo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WKAppController : NSObject{
    NSStatusItem *statusItem;
    IBOutlet NSMenu *statusMenu;
    IBOutlet NSWindow *window;
    
    IBOutlet NSTextField *apiKey;
}

- (IBAction)showPreferences:(id)sender;
- (IBAction)quit:(id)sender;

-(IBAction)Close:(id)sender;
-(void)loadKeys;

@end
