package io.github.birjuvachhani.ndksecurekeys

/*
 * Created by Birju Vachhani on 18 September 2019
 * Copyright © 2019 NDK  Secure Keys. All rights reserved.
 */

object Keys {

    init {
        System.loadLibrary("native-lib")
    }

    external fun apiKey(): String
}