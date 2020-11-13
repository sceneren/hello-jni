package com.swt.set.key

object SwtKeyUtils {

    init {
        System.loadLibrary("KeyLib")
    }

    external fun getSM2PublicKey(): String
    external fun getSM2TestPublicKey():String
}

//if (debug_model) {
//        return (*env)->NewStringUTF(env,
//                                    "04F293BDC7F1200389C0E128BAC8EE6D585F2156B7CF6C4C0AB88BAC02B16F78654892AF599A7D319D8176358E893844119B45B66DABA72C78D5BF4EA0A88D5186");
//    } else {
//        return (*env)->NewStringUTF(env,
//                                    "045905888D90363FD6D78BB59730E1FBCB353724B5D29D65574124EF33EEC4D15725830F1BF037BAFF445D1842B0C97E6D1BEF843394452D06626FBA36F630C3A6");
//    }