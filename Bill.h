#import<Foundation/Foundation.h>
#import "protocolvat.h"
#import "protocolkst.h"
#import "protocolcst.h"
@interface Bill:NSObject <protocolvat,protocolkst,protocolcst>
{
  NSString *type;
  float amount;
  float totalTax;
  float totalAmount;
}
@property float amount;
@property float totalTax;
@property (retain)NSString  *type;
-(void)taxCalculator:(Bill*) bill;
-(void)print;
@end
