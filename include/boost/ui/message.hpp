// Copyright (c) 2017 Kolya Kosenko

// Distributed under the Boost Software License, Version 1.0.
// See http://www.boost.org/LICENSE_1_0.txt

/// @file message.hpp Display message file

#ifndef BOOST_UI_MESSAGE_HPP
#define BOOST_UI_MESSAGE_HPP

#include <boost/ui/config.hpp>
#include <boost/ui/string.hpp>

namespace boost {
namespace ui    {

/// @brief Display information as an non intrusive notification
/// @ingroup notify
BOOST_UI_DECL
void info_notify(const uistring& message,
                 const uistring& title = ascii("Information"));

/// @brief Display warning as an non intrusive notification
/// @ingroup notify
BOOST_UI_DECL
void warning_notify(const uistring& message,
                    const uistring& title = ascii("Warning"));

/// @brief Display error as an non intrusive notification
/// @ingroup notify
BOOST_UI_DECL
void error_notify(const uistring& message,
                  const uistring& title = ascii("Error"));


/// @brief Display information in application-modal dialog
/// @ingroup alert
BOOST_UI_DECL
void info_dlg(const uistring& message,
              const uistring& title = ascii("Information"));

/// @brief Display warning in application-modal dialog
/// @ingroup alert
BOOST_UI_DECL
void warning_dlg(const uistring& message,
                 const uistring& title = ascii("Warning"));

/// @brief Display error in application-modal dialog
/// @ingroup alert
BOOST_UI_DECL
void error_dlg(const uistring& message,
               const uistring& title = ascii("Error"));

/// @brief Request user confirmation using application-modal dialog
/// @see <a href="http://en.wikipedia.org/wiki/Confirmation_dialog_box">Confirmation dialog box (Wikipedia)</a>
/// @ingroup alert
BOOST_UI_DECL
bool confirm(const uistring& message,
             const uistring& title = ascii("Confirmation"));

/// @brief Request user answer using application-modal dialog
/// @ingroup alert
BOOST_UI_DECL
bool question(const uistring& message,
              const uistring& title = ascii("Question"));


///@{ @brief Request user value using application-modal dialog
/// @ingroup prompt
BOOST_UI_DECL
bool prompt(const uistring& message, const uistring& title, std::wstring& value);
BOOST_UI_DECL
bool prompt(const uistring& message, const uistring& title, uistring& value);
///@}

///@{ @brief Request user password using application-modal dialog
/// @ingroup prompt
BOOST_UI_DECL
bool prompt_password(const uistring& message, const uistring& title, std::wstring& value);
BOOST_UI_DECL
bool prompt_password(const uistring& message, const uistring& title, uistring& value);
///@}

} // namespace ui
} // namespace boost

#endif // BOOST_UI_MESSAGE_HPP
