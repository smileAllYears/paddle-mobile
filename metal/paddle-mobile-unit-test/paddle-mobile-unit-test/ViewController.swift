//
//  ViewController.swift
//  paddle-mobile-unit-test
//
//  Created by liuRuiLong on 2018/8/10.
//  Copyright © 2018年 orange. All rights reserved.
//

import UIKit
import paddle_mobile

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let device = MTLCreateSystemDefaultDevice()
        let mcQueue = device?.makeCommandQueue()
        
        let pmUnitTest = PaddleMobileUnitTest.init(inDevice: device!, inQueue: mcQueue!)
        
        pmUnitTest.testMps()
        
        print(" done ")
    }

}
