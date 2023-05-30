#include "MagicalContainer.hpp"

using namespace std;
using namespace ariel;

    void MagicalContainer::addElement(int obj){}

    void MagicalContainer::removeElement(int obj){}

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
        bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const {return false;}

        // Inequality comparison (operator!=)
        bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const {return !(*this == other);}

        // GT, LT comparison (operator>, operatorn<)
        bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other){return false;}

        bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other){return false;}

        // Dereference operator (operator*)
        int MagicalContainer::AscendingIterator::operator*(){return 1;}

        // Pre-increment operator (operator++) ++i
        int MagicalContainer::AscendingIterator::operator++()
        {
            this->index++;
            return this->index;
        }

        // begin(type)
        MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin(){return AscendingIterator();}

        // end(type)
        MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end(){return AscendingIterator();}

    
    
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
        bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const {return false;}

        // Inequality comparison (operator!=)
        bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const {return !(*this == other);}

        // GT, LT comparison (operator>, operatorn<)
        bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other){return false;}

        bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other){return false;}

        // Dereference operator (operator*)
        int MagicalContainer::SideCrossIterator::operator*(){return 1;}

        // Pre-increment operator (operator++) ++i
        int MagicalContainer::SideCrossIterator::operator++()
        {
            this->index++;
            return this->index;
        }   

        // begin(type)
        MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(){return SideCrossIterator();}

        // end(type)
        MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(){return SideCrossIterator();}

    
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
        bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const {return false;}

        // Inequality comparison (operator!=)
        bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const {return !(*this == other);}

        // GT, LT comparison (operator>, operatorn<)
        bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other){return false;}

        bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other){return false;}

        // Dereference operator (operator*)
        int MagicalContainer::PrimeIterator::operator*(){return 1;}

        // Pre-increment operator (operator++) ++i
        int MagicalContainer::PrimeIterator::operator++()
        {
            this->index++;
            return this->index;
        }

        // begin(type)
        MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(){return PrimeIterator();}

        // end(type)
        MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(){return PrimeIterator();}



