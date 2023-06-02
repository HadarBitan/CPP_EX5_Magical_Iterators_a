#include "MagicalContainer.hpp"
#include <algorithm>

using namespace std;
using namespace ariel;

    void MagicalContainer::addElement(int obj)
    {
        auto it = std::lower_bound(this->myObj.begin(), this->myObj.end(), obj);
        this->myObj.insert(it, obj);    
    }

    void MagicalContainer::removeElement(int obj)
    {
        auto it = std::find(this->myObj.begin(), this->myObj.end(), obj);
        if (it != this->myObj.end()) {
            this->myObj.erase(it);
        }
    }

    std::ostream& ariel::operator<<(std::ostream &outs, const MagicalContainer &container){return outs;}

    //--------------AscendingIterator---------------

        // Copy constructor
        MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other){}

        //move assignment operator
        MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(AscendingIterator &&other) noexcept{return *this;}

        // Destructor
        MagicalContainer::AscendingIterator::~AscendingIterator(){}

        // Assignment operator
        MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other){return *this;}

        // Equality comparison (operator==)
        bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const {return this->myContainer->myObj[index] == other.myContainer->myObj[index];}

        // Inequality comparison (operator!=)
        bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const {return !(*this == other);}

        // GT, LT comparison (operator>, operatorn<)
        bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other){return false;}

        bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other){return false;}

        // Dereference operator (operator*)
        int MagicalContainer::AscendingIterator::operator*(){return 1;}

        // Pre-increment operator (operator++) ++i
        MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::operator++()
        {
            this->index++;
            return *this;
        }

        // begin(type)
        MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
        {
            return AscendingIterator(*myContainer);
        }

        // end(type)
        MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
        {
            AscendingIterator it(*myContainer);
            it.index = myContainer->myObj.size();  // Set index to the size of the set
            return it;
        }

    
    //--------------SideCrossIterator---------------

        // Copy constructor
        MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& other){}

        //move assignment operator
        MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(SideCrossIterator &&other) noexcept{return *this;}

        // Destructor
        MagicalContainer::SideCrossIterator::~SideCrossIterator(){}

        // Assignment operator
        MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other){return *this;}

        // Equality comparison (operator==)
        bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const {return this->myContainer->myObj[index] == other.myContainer->myObj[index];}

        // Inequality comparison (operator!=)
        bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const {return !(*this == other);}

        // GT, LT comparison (operator>, operatorn<)
        bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other){return false;}

        bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other){return false;}

        // Dereference operator (operator*)
        int MagicalContainer::SideCrossIterator::operator*(){return 1;}

        // Pre-increment operator (operator++) ++i
        MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::operator++()
        {
            this->index++;
            return *this;
        }   

        // begin(type)
        MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
        {
            return SideCrossIterator(*myContainer);
        }

        // end(type)
        MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
        {
            SideCrossIterator it(*myContainer);
            it.index = myContainer->myObj.size();  // Set index to the size of the set
            return it;
        }

    
    //--------------PrimeIterator---------------

        // Copy constructor
        MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& other){}

        //move assignment operator
        MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(PrimeIterator &&other) noexcept{return *this;}

        // Destructor
        MagicalContainer::PrimeIterator::~PrimeIterator(){}

        // Assignment operator
        MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other){return *this;}

        // Equality comparison (operator==)
        bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const {return this->myContainer->myObj[index] == other.myContainer->myObj[index];}

        // Inequality comparison (operator!=)
        bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const {return !(*this == other);}

        // GT, LT comparison (operator>, operatorn<)
        bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other){return false;}

        bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other){return false;}

        // Dereference operator (operator*)
        int MagicalContainer::PrimeIterator::operator*(){return 1;}

        // Pre-increment operator (operator++) ++i
        MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::operator++()
        {
            this->index++;
            return *this;
        }

        // begin(type)
        MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
        {
            return PrimeIterator(*myContainer);
        }

        // end(type)
        MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
        {
            PrimeIterator it(*myContainer);
            it.index = myContainer->myObj.size();  // Set index to the size of the set
            return it;
        }



