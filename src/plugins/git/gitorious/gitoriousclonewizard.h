/****************************************************************************
**
** Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

#ifndef GITORIOUSCLONEWIZARD_H
#define GITORIOUSCLONEWIZARD_H

#include <vcsbase/basecheckoutwizard.h>

namespace Gitorious {
namespace Internal {

// GitoriousCloneWizard: A wizard allowing for browsing
// Gitorious-hosted projects.
class GitoriousCloneWizard : public VcsBase::BaseCheckoutWizard
{
    Q_OBJECT
public:
    explicit GitoriousCloneWizard(QObject *parent = 0);

    // IWizard
    virtual QIcon icon() const;
    virtual QString description() const;
    virtual QString displayName() const;

protected:
    // BaseCheckoutWizard
    virtual QList<QWizardPage*> createParameterPages(const QString &path);
    virtual QSharedPointer<VcsBase::AbstractCheckoutJob> createJob(const QList<QWizardPage*> &parameterPages,
                                                                   QString *checkoutPath);
};

} // namespace Internal
} // namespace Gitorious

#endif // GITORIOUSCLONEWIZARD_H
