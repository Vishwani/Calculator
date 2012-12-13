//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Samar Singla on 10/30/12.
//  Copyright (c) 2012 Samar Singla. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

-(void)pushOperand:(double)operand;
-(double)performOperation:(NSString *)operation;

@property (readonly) id program;

+ (double) runProgram:(id) program;
+ (NSString *) descriptionOfProgram:(id) program;

@end
