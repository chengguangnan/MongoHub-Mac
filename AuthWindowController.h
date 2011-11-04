//
//  AuthWindowController.h
//  MongoHub
//
//  Created by Syd on 10-5-6.
//  Copyright 2010 ThePeppersStudio.COM. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class DatabasesArrayController;
@class MHConnection;

@interface AuthWindowController : NSWindowController {
    IBOutlet NSTextField *userTextField;
    IBOutlet NSTextField *passwordTextField;
    MHConnection *conn;
    NSString *dbname;
    IBOutlet DatabasesArrayController *databasesArrayController;
}

@property (nonatomic, retain) NSTextField *userTextField;
@property (nonatomic, retain) NSTextField *passwordTextField;
@property (nonatomic, retain) MHConnection *conn;
@property (nonatomic, retain) NSString *dbname;
@property (nonatomic, retain) DatabasesArrayController *databasesArrayController;

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;
- (void) saveAction;
@end
