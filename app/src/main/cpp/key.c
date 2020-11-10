/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>

/* This is a trivial JNI example where we use a native method
 * to return a new VM String. See the corresponding Java source
 * file located at:
 *
 *   hello-jni/app/src/main/java/com/example/hellojni/HelloJni.java
 */
JNIEXPORT jstring JNICALL
Java_com_swt_set_key_SwtKeyUtils_getSM2PublicKey(JNIEnv *env, jobject thiz, jboolean debug_model) {
    if (debug_model) {
        return (*env)->NewStringUTF(env,
                                    "04F293BDC7F1200389C0E128BAC8EE6D585F2156B7CF6C4C0AB88BAC02B16F78654892AF599A7D319D8176358E893844119B45B66DABA72C78D5BF4EA0A88D5186");
    } else {
        return (*env)->NewStringUTF(env,
                                    "045905888D90363FD6D78BB59730E1FBCB353724B5D29D65574124EF33EEC4D15725830F1BF037BAFF445D1842B0C97E6D1BEF843394452D06626FBA36F630C3A6");
    }
}