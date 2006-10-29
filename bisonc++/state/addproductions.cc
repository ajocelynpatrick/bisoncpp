#include "state.ih"

// d_nextVector.back() is the entry containing the symbol whose production
// rules are added to d_itemVector. 
// idx is the current index in d_itemVector
// 
// All productions of `symbol' are determined, and each is handled by
// addProduction which will add the production to d_itemVector, adding its
// index to stateItem[idx] dependent-list
//
// d_nextVector.back()'s kernel adds idx (as the item at d_itemVector[idx]) to
// its kernel-list. 

void State::addProductions(Symbol const *symbol, size_t idx)
{
                            // obtain all productions of `symbol'
    Production::Vector const &productions = 
                        NonTerminal::downcast(symbol)->productions();

    StateItem::APContext context = 
    {
        d_itemVector,
        idx,
    };

    for_each(productions.begin(), productions.end(),
            Wrap1c<Production, StateItem::APContext>(
                StateItem::addProduction, context));
}


