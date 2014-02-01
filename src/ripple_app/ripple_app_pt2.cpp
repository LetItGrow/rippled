//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#include "BeastConfig.h"

#include "ripple_app.h"

#include "../ripple/common/seconds_clock.h"

namespace ripple {

#include "shamap/SHAMap.cpp" // Uses theApp
#include "shamap/SHAMapItem.cpp"
#include "shamap/SHAMapSync.cpp"
#include "shamap/SHAMapMissingNode.cpp"

#include "misc/AccountItem.cpp"
#include "tx/AccountSetTransactor.cpp"
#include "misc/CanonicalTXSet.cpp"
#include "ledger/LedgerProposal.cpp"
#include "main/LoadManager.cpp"
#include "misc/NicknameState.cpp"
#include "tx/OfferCancelTransactor.cpp"
#include "ledger/OrderBookDB.cpp"

#include "data/Database.cpp"
#include "data/DatabaseCon.cpp"
#include "data/SqliteDatabase.cpp"
#include "data/DBInit.cpp"

}

# include "shamap/RadixMapTest.h"
#include "shamap/RadixMapTest.cpp"
#include "shamap/FetchPackTests.cpp"
