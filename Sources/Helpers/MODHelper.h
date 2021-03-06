//
//  MODHelper.h
//  MongoHub
//
//  Created by Jérôme Lebel on 20/09/2011.
//

#import <Foundation/Foundation.h>
#import <MongoObjCDriver/MongoObjCDriver.h>

@class MODSortedDictionary;

@interface MODHelper : NSObject

+ (NSArray *)convertForOutlineWithObjects:(NSArray *)mongoObjects bsonData:(NSArray *)allData jsonKeySortOrder:(MODJsonKeySortOrder)jsonKeySortOrder;
+ (NSArray *)convertForOutlineWithObject:(MODSortedDictionary *)mongoObject jsonKeySortOrder:(MODJsonKeySortOrder)jsonKeySortOrder;

@end
