// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2017-2018 The ManageMyNode developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZMANAGEMYNODECONTROLDIALOG_H
#define ZMANAGEMYNODECONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZManageMyNodeControlDialog;
}

class ZManageMyNodeControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZManageMyNodeControlDialog(QWidget *parent);
    ~ZManageMyNodeControlDialog();

    void setModel(WalletModel* model);

    static std::list<std::string> listSelectedMints;
    static std::list<CZerocoinMint> listMints;
    static std::vector<CZerocoinMint> GetSelectedMints();

private:
    Ui::ZManageMyNodeControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZMANAGEMYNODECONTROLDIALOG_H
