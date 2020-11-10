package com.swt.set.key

object SwtKeyUtils {

    init {
        System.loadLibrary("KeyLib")
    }

    external fun getSM2PublicKey(debugModel: Boolean): String
}