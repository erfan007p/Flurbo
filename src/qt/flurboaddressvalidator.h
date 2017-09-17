// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FLURBO_QT_FLURBOADDRESSVALIDATOR_H
#define FLURBO_QT_FLURBOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FlurboAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FlurboAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Flurbo address widget validator, checks for a valid flurbo address.
 */
class FlurboAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FlurboAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // FLURBO_QT_FLURBOADDRESSVALIDATOR_H
