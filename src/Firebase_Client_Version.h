#ifndef FIREBASE_CLIENT_VERSION
#define FIREBASE_CLIENT_VERSION "4.3.9"
#define FIREBASE_CLIENT_VERSION_NUM 40309

/* The inconsistent file version checking to prevent mixed versions compilation. */
#define FIREBASE_CLIENT_VERSION_CHECK(ver) (ver == FIREBASE_CLIENT_VERSION_NUM)
#endif