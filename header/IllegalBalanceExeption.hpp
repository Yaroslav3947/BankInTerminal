#pragma once

class IllegalBalanceExeption : public std::exception {
public:
    IllegalBalanceExeption() noexcept = default;
    ~IllegalBalanceExeption() = default;
    virtual const char *what() const noexcept {
        return  "Illegal balance exeption";
    }
};