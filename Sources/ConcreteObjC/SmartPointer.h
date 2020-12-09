//
//  Header.h
//  
//
//  Created by Zhu Shengqi on 2020/12/9.
//

#pragma once

#if defined(__cplusplus)

#import <Foundation/Foundation.h>

// https://gist.github.com/steipete/0f65c234ee843ed514ff
/// A smart pointer that can manage the lifecycle of Core Foundation objects.
template<typename T>
class CFPointer {
public:
  CFPointer() : storage(nullptr) {}
  
  CFPointer(T pointer): storage(toStorageType(pointer)) {
    if (storage) {
      CFRetain(storage);
    }
  }
  
  CFPointer(const CFPointer &other): storage(other.storage) {
    if (auto ptr = storage) {
      CFRetain(ptr);
    }
  }
  
  CFPointer(CFPointer &&other): storage(std::exchange(other.storage, nullptr)) {}
  
  ~CFPointer() {
    if (auto pointer = storage) {
      CFRelease(pointer);
    }
  }
  
  static inline CFPointer<T> adopt(T CF_RELEASES_ARGUMENT ptr);
  
  T get() const;
  CFPointer &operator=(CFPointer);
  
private:
  CFTypeRef storage;
  
  enum AdoptTag { Adopt };
  CFPointer(T ptr, AdoptTag) : storage(toStorageType(ptr)) { }
  
  inline CFTypeRef toStorageType(CFTypeRef ptr) const {
    return (CFTypeRef)ptr;
  }
  
  inline T fromStorageType(CFTypeRef pointer) const {
    return (T)pointer;
  }
  
  void swap(CFPointer &);
};

template<typename T>
CFPointer<T> CFPointer<T>::adopt(T CF_RELEASES_ARGUMENT ptr) {
  return CFPointer<T>(ptr, CFPointer<T>::Adopt);
}

template<typename T>
T CFPointer<T>::get() const {
  return fromStorageType(storage);
}

template<typename T>
inline CFPointer<T>& CFPointer<T>::operator=(CFPointer other) {
  swap(other);
  return *this;
}

template<typename T>
inline void CFPointer<T>::swap(CFPointer &other) {
  std::swap(storage, other.storage);
}


// cpp:

/// A smart pointer that can manage the lifecycle of Core Foundation objects.

#endif
