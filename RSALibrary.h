@interface RSALibrary : NSObject {
	
}

+ (NSString *)verifySignature:(NSString *)signature publicExponent:(NSString *)publicExponent modulus:(NSString *)modulus;

+ (NSString *)signMessage:(NSString *)message privateExponent:(NSString *)privateExponent modulus:(NSString *)modulus;

@end
