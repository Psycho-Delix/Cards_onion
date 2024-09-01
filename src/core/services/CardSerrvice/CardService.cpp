#include "CardService.h"

#include <sstream>

Suit CardService::get_suit( Card& card) 
{
    return card._suit;
}

char CardService::get_rank( Card& card) 
{
    return card._rank;
}

std::string CardService::to_string(Card& card)
{
    std::stringstream ss;
    switch (card._rank)
    {
    case 11: ss << "J"; break;
    case 12: ss << "Q"; break;
    case 13: ss << "K"; break;
    case 1: ss << "A"; break;
    default:
        ss << card._rank;
    }

    ss << " of ";
    switch (card._suit)
    {
    case Suit::Hearts: ss << "Heards"; break;
    case Suit::Diamonds: ss << "Diamonds"; break;
    case Suit::Clubs: ss << "Clubs"; break;
    case Suit::Spades: ss << "Spades"; break;
    }
    return ss.str();
}

