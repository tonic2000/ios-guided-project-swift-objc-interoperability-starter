//
//  LSIContactController.h
//  Contacts-Hybrid
//
//  Created by Nick Nguyen on 4/20/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

// Not check target the header file

// Forward declaration
@class Contact;

// Use this macro to rename your class for use in Swift
NS_SWIFT_NAME(ContactController)

@interface LSIContactController : NSObject
// "Lightweight generics" make our Objective- C array types
// easier to use in Swift

// null_unspecified -> [Contact]!
// nullable -> [Contact]?
// nonnull -> [Contact]
// null_resettable -> [Contact]?


@property (nonatomic, readonly, copy, nonnull) NSArray<Contact *> *contacts;






@end

