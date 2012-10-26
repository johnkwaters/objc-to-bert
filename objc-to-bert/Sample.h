#import <Foundation/Foundation.h>
#import "objc_to_bert.h"


@interface Sample : NSObject {
    long id;
    NSString *name;
    char age;
}

@property(nonatomic, assign) long id;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, assign) char age;

+ (Sample *)createWithData:(NSData *)data;

+ (Sample *)createWithId:(long)id andName:(NSString *)name andAge:(char)age;

- (NSData *)encode;

- (void)decode:(NSData *)data;

@end