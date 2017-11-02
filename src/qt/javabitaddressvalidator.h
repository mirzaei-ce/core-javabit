// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef JAVABIT_QT_JAVABITADDRESSVALIDATOR_H
#define JAVABIT_QT_JAVABITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class JavabitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JavabitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Javabit address widget validator, checks for a valid javabit address.
 */
class JavabitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit JavabitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // JAVABIT_QT_JAVABITADDRESSVALIDATOR_H
