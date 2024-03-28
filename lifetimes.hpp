#ifndef OBJECT_LIFETIME_TOOL
#define OBJECT_LIFETIME_TOOL

#if __cplusplus >= 202302L
#include <print>
#else
#include <iostream>
#endif


class LifetimeObject
{
public:
    // Default Constructor
    LifetimeObject() noexcept {
        #if __cplusplus >= 202302L
            std::println("LifetimeObject::Constructed");
        #else
            std::cout << "LifetimeObject::Constructed\n";
        #endif
    }

    // Copy Constructors
    LifetimeObject(const LifetimeObject& other) noexcept {
        #if __cplusplus >= 202302L
            std::println("LifetimeObject::Copied"); 
        #else
            std::cout << "LifetimeObject::Copied\n";
        #endif
    }

    LifetimeObject& operator=(const LifetimeObject&) noexcept {
        #if __cplusplus >= 202302L
            std::println("LifetimeObject::Copy Assigned");
        #else
            std::cout << "LifetimeObject::Copy Assigned\n";
        #endif
        return *this;
    }

    // Move Constructors
    LifetimeObject(LifetimeObject&& other) noexcept {
        #if __cplusplus >= 202302L
            std::println("LifetimeObject::Moved"); 
        #else
            std::cout << "LifetimeObject::Moved\n";
        #endif
    }

    LifetimeObject& operator=(LifetimeObject&&) noexcept {
        #if __cplusplus >= 202302L
            std::println("LifetimeObject::Move Assigned");
        #else
            std::cout << "LifetimeObject::Move Assigned\n";
        #endif
        return *this;
    }

    // Destructor
    ~LifetimeObject() noexcept { 
        #if __cplusplus >= 202302L
            std::println("LifetimeObject::Destroyed"); 
        #else
            std::cout << "LifetimeObject::Destroyed\n";
        #endif
    }
};


#endif
