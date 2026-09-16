/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2024 Synergy App Ltd
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#pragma once

#include <QString>

// important: this is used for settings paths on some platforms,
// and must not be a url. qt automatically converts this to reverse domain
// notation (rdn), e.g. org.deskflow
const auto kOrgDomain = QStringLiteral("deskflow.org");

const auto kUrlSourceQuery = QStringLiteral("source=gui");
const auto kUrlGitHubRepo = QStringLiteral("https://github.com/crashbandicode/deskflow");
const auto kUrlApp = kUrlGitHubRepo;
const auto kUrlHelp = QStringLiteral("%1#readme").arg(kUrlGitHubRepo);
const auto kUrlDownload = QStringLiteral("%1/releases/latest").arg(kUrlGitHubRepo);
const auto kUrlWiki = QStringLiteral("%1/wiki").arg(kUrlGitHubRepo);
const auto kUrlUpdateCheck =
    QStringLiteral("https://raw.githubusercontent.com/crashbandicode/deskflow/master/VERSION");

#if defined(Q_OS_LINUX)
const auto kUrlGnomeTrayFix = QStringLiteral("https://extensions.gnome.org/extension/615/appindicator-support/");
#endif
