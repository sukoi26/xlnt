// Copyright (c) 2014-2017 Thomas Fussell
// Copyright (c) 2010-2015 openpyxl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, WRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE
//
// @license: http://www.opensource.org/licenses/mit-license.php
// @author: see AUTHORS file

#pragma once

#include <string>
#include <vector>

#include <xlnt/xlnt_config.hpp>
#include <xlnt/utils/optional.hpp>

namespace xlnt
{

/// <summary>
/// work book definedName  class :
/// This element defines the defined names that are defined within this workbook.
/// Defined names are descriptive text that is used to represents a cell, range of cells,
/// formula, or constant value. Use easy-to-understand names,
/// such as Products, to refer to hard to understand ranges, such as Sales!C20:C30.
/// </summary>
class XLNT_API defined_name
{
public:
    defined_name ();

    defined_name (const defined_name&);
    defined_name& operator= (const defined_name&);

    ~defined_name ();

    ///
    /// name
    ///
    const std::string& name () const;

    std::string& name ();

    void name (const std::string&);

    ///
    /// value
    ///
    const std::string& value () const;

    std::string& value ();

    void value (const std::string&);

    ///
    /// comment
    ///

    const std::string& comment () const;

    std::string& comment ();

    void comment (const std::string&);

    bool has_comment () const;

    ///
    /// customMenu
    ///

    const std::string&  customMenu () const;

    std::string&  customMenu ();

    void customMenu (const ::std::string&);

    bool has_customMenu () const;

    ///
    /// description
    ///

    const std::string& description () const;

    std::string& description ();

    void description (const std::string&);

    bool has_description () const;

    ///
    /// help
    ///

    const std::string& help () const;

    std::string& help ();

    void help (const ::std::string&);

    bool has_help();

    ///
    /// statusBar
    ///

    const std::string& statusBar () const;

    std::string& statusBar ();

    void statusBar (const std::string&);

    bool has_statusBar();
    ///
    /// localSheetId
    ///
    unsigned int localSheetId () const;

    unsigned int& localSheetId ();

    void localSheetId (unsigned int);

    bool has_localSheetId () ;
    ///
    /// hidden
    ///
    bool hidden () const;

    void  hidden (bool);

    ///
    /// function
    ///

    bool function () const;

    void  function (bool);

    ///
    /// vbProcedure
    ///

    bool vbProcedure () const;

    void  vbProcedure (bool);

    ///
    /// xlm
    ///

    bool xlm () const;

    void  xlm (bool);

    ///
    /// functionGroupId
    ///

    unsigned int functionGroupId () const;

    unsigned int& functionGroupId ();

    void functionGroupId (unsigned int);

    bool has_functionGroupID ();
    ///
    /// shortcutKey
    ///

    const std::string& shortcutKey () const;

    std::string&  shortcutKey ();

    void shortcutKey (const std::string&);

    bool has_shortcutKey();
    ///
    /// publishToServer
    ///

    bool publishToServer () const;

    void publishToServer (bool);

    ///
    /// workbookParameter
    ///
    bool workbookParameter () const;

    void workbookParameter (bool);

private:
    std::string name_;
    std::string value_;
    optional<std::string> comment_;
    optional<std::string> customMenu_;
    optional<std::string> description_;
    optional<std::string> help_;
    optional<std::string> statusBar_;
    optional<unsigned int> localSheetId_;
    bool hidden_;
    bool function_;
    bool vbProcedure_;
    bool xlm_;
    optional<unsigned int> functionGroupId_;
    optional<std::string> shortcutKey_;
    bool publishToServer_;
    bool workbookParameter_;
};

} // namespace xlnt
