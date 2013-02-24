//
//  STAppDelegate.h
//  frequency dictionary
//
//  Created by Artyom Starostenkov on 24.02.13.
//  Copyright (c) 2013 Artyom Starostenkov. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface STAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
