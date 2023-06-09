#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace ariel
{
    class MagicalContainer
    {
    private:
        vector<int> myObj;
    public:
        MagicalContainer() {}
        void addElement(int obj);
        void removeElement(int obj);
        int size() const { return (int)this->myObj.size(); }

        class AscendingIterator
        {
        private:
            MagicalContainer* myContainer;
            vector<int>::size_type index;

        public:
            // constructor
            AscendingIterator(MagicalContainer &ptr) : myContainer(&ptr), index(0) {}

            // Default constructor
            AscendingIterator() : myContainer(nullptr), index(0) {}

            // Copy constructor
            AscendingIterator(const AscendingIterator& other);

            //move assignment operator
            AscendingIterator &operator=(AscendingIterator &&other) noexcept;

            //move constructor
            AscendingIterator(AscendingIterator&& other) noexcept : myContainer(other.myContainer), index(0) {}

            // Destructor
            ~AscendingIterator();

            // Assignment operator
            AscendingIterator& operator=(const AscendingIterator &other);

            // Equality comparison (operator==)
            bool operator==(const AscendingIterator &other) const;

            // Inequality comparison (operator!=)
            bool operator!=(const AscendingIterator &other) const;

            // GT, LT comparison (operator>, operatorn<)
            bool operator>(const AscendingIterator &other);
            bool operator<(const AscendingIterator &other);

            // Dereference operator (operator*)
            int operator*();

            // Pre-increment operator (operator++) ++i
            AscendingIterator operator++();
            // begin(type)
            AscendingIterator begin();

            // end(type)
            AscendingIterator end();
        };

        class SideCrossIterator
        {
        private:
            MagicalContainer* myContainer;
            vector<int>::size_type index;

        public:
            // constructor
            SideCrossIterator(MagicalContainer &ptr) : myContainer(&ptr), index(0) {}

            // Default constructor
            SideCrossIterator() : myContainer(nullptr), index(0) {}

            // Copy constructor
            SideCrossIterator(const SideCrossIterator &other);

            //move assignment operator
            SideCrossIterator &operator=(SideCrossIterator &&other) noexcept;

            //move constructor
            SideCrossIterator(SideCrossIterator&& other) noexcept : myContainer(other.myContainer), index(0) {}

            // Destructor
            ~SideCrossIterator();

            // Assignment operator
            SideCrossIterator &operator=(const SideCrossIterator &other);

            // Equality comparison (operator==)
            bool operator==(const SideCrossIterator &other) const;

            // Inequality comparison (operator!=)
            bool operator!=(const SideCrossIterator &other) const;

            // GT, LT comparison (operator>, operatorn<)
            bool operator>(const SideCrossIterator &other);
            bool operator<(const SideCrossIterator &other);

            // Dereference operator (operator*)
            int operator*();

            // Pre-increment operator (operator++) ++i
            SideCrossIterator operator++();

            // begin(type)
            SideCrossIterator begin();

            // end(type)
            SideCrossIterator end();
        };

        class PrimeIterator
        {
        private:
            MagicalContainer* myContainer;
            vector<int>::size_type index;

        public:
            // constructor
            PrimeIterator(MagicalContainer &ptr) : myContainer(&ptr), index(0) {}

            // Default constructor
            PrimeIterator() : myContainer(nullptr), index(0) {}

            // Copy constructor
            PrimeIterator(const PrimeIterator &other);

            //move assignment operator
            PrimeIterator &operator=(PrimeIterator &&other) noexcept;

            //move constructor
            PrimeIterator(PrimeIterator&& other) noexcept : myContainer(other.myContainer), index(0) {}

            // Destructor
            ~PrimeIterator();

            // Assignment operator
            PrimeIterator &operator=(const PrimeIterator &other);

            // Equality comparison (operator==)
            bool operator==(const PrimeIterator &other) const;

            // Inequality comparison (operator!=)
            bool operator!=(const PrimeIterator &other) const;

            // GT, LT comparison (operator>, operatorn<)
            bool operator>(const PrimeIterator &other);
            bool operator<(const PrimeIterator &other);

            // Dereference operator (operator*)
            int operator*();

            // Pre-increment operator (operator++) ++i
            PrimeIterator operator++();

            // begin(type)
            PrimeIterator begin();

            // end(type)
            PrimeIterator end();
        };
    };
}

#endif