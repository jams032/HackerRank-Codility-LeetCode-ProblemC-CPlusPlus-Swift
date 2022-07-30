//
//  BinaryGap.swift
//  
//
//  Created by Jamshed on 30/7/22.
//

import Foundation
import Glibc

// you can write to stdout for debugging purposes, e.g.
// print("this is a debug message")

public func solution(_ N : Int) -> Int {
    // write your code in Swift 4.2.1 (Linux)
    let n = Int(log2(Double(N))) + 1
    var binAr = Array(repeating: 0, count: n)
    var idx = n
    var a = N
    while idx > 0 {
        binAr[idx-1] = a % 2
        idx -= 1
        a /= 2
    }
    
    var maxCount = 0
    var PreviousMaxCount = 0
    var countingStarted = false
    
    for ID in binAr {
        
        if !countingStarted && Int(ID) == 1 {
            countingStarted = true
        }
        
        if countingStarted && Int(ID) == 0 {
            maxCount += 1
        }
        
        if countingStarted && Int(ID) == 1 {
            if  maxCount > PreviousMaxCount  {
                PreviousMaxCount = maxCount
            }
            maxCount = 0
        }
    }
    return PreviousMaxCount
}
