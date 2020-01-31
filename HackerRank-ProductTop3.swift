//
//  main.swift
//  ProductTop3
//
//  Created by Jamshed on 17/12/19.
//  Copyright © 2019 Jamshed. All rights reserved.
//

import Foundation
import Cocoa


let firstLine = readLine()
let secondLine = readLine()

let whitespace = NSCharacterSet.whitespaces
let phrase = firstLine

if (firstLine?.contains(" "))!{ // if user entry space with limit or something
    print("-1")
} else { // for valid entry
    
    let fullInputArr = secondLine!.split{$0 == " "}.map(String.init)
    
    var fullInputArrInt = [Int]()
    var count = 0
    for currentInput in fullInputArr {
        
        if let myInt = Int(currentInput) {
            fullInputArrInt.append(myInt)
            count = count + 1
        } else {
            break
        }
    }
    
    if fullInputArr.count < 3 || count != Int(firstLine!) {
        print("-1")
    } else {
        
        var numberArray: [Any] = fullInputArr.sorted()
        

        /// - Parameters:
        ///     - numbers: array of anything
        /// - Returns: sorted _Double_ array
        func sortAnyNumbers(_ numbers: [Any]) -> [Int] {
            var _numbers: [Int] = []
            numbers.forEach { number in
                if let numb = Int("\(number)".components(separatedBy: CharacterSet(charactersIn: "-01234567890.").inverted).joined()) {
                    _numbers.append(Int(numb))
                }
            }
            return _numbers.sorted()
        }
        
        let sortedArray = sortAnyNumbers(numberArray)
        let  totalProduct = Int(sortedArray[sortedArray.count-1]) * Int(sortedArray[sortedArray.count-2]) * Int(sortedArray[sortedArray.count-3])
        print(totalProduct)
    }
}

